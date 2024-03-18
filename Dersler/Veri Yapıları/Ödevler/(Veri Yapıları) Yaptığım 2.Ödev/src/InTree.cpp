/**
 * @file            InTree.cpp
 * @description                 InTree'nin kaynak dosyası.
 * @course                       1.Öğretim - C grubu
 * @assignment                2.Ödev
 * @date            27.12.2020
 * @author          Muhammet Kemal Güvenç - kemal.guvenc@ogr.sakarya.edu.tr
 */

#include "InTree.hpp"

InTree::InTree(string worker_name, unsigned int year){
    root=new InTreeNode(worker_name, year);
}

unsigned int InTree::height(InTreeNode* node) const{
    if(node==NULL)
        return 0;
    return node->height;
}

InTreeNode* InTree::left_rotate(InTreeNode* node) const{
    InTreeNode* x=node->right;
    InTreeNode* y=x->left;
    
    x->left = node;
    node->right = y;
    
    node->height = max(height(x->left), height(x->right))+1;
    x->height = max(height(node->left), height(node->right))+1;
    
    return y;
}

InTreeNode* InTree::right_rotate(InTreeNode* node) const{
    InTreeNode* x=node->left;
    InTreeNode* y=x->right;
    
    x->right = node;
    node->left = y;
    
    node->height = max(height(node->left), height(node->right))+1;
    x->height = max(height(x->left), height(x->right))+1;
    
    return x;
}

int InTree::get_balance(InTreeNode *node) const{
    if (node == NULL)
        return 0;
    return height(node->left) - height(node->right);
}

InTreeNode* InTree::add(InTreeNode* node, string worker_name, unsigned int year) const{
    
    if(node==NULL){
        return new InTreeNode(worker_name, year);;
    }
    
    if (year >= node->year)
        node->left  = add(node->left, worker_name, year);
    else
        node->right = add(node->right, worker_name, year);
    
    node->height = 1 + max(height(node->left), height(node->right));
    
    int balance = get_balance(node);
    
    if (balance > 1 && year > node->left->year)
        return right_rotate(node);
      
    if (balance < -1 && year < node->right->year)
        return left_rotate(node);
      
    if (balance > 1 && year < node->left->year){
        node->left =  left_rotate(node->left);
        return right_rotate(node);
    }
      
    if (balance < -1 && year > node->right->year){
        node->right = right_rotate(node->right);
        return left_rotate(node);
    }
        return node;
    
}

void InTree::post_order(InTreeNode *node) const{
    if(node!=NULL){
        post_order(node->left);
        post_order(node->right);
        cout << node->worker_name << " - " << node->year << " | ";
    }
}
