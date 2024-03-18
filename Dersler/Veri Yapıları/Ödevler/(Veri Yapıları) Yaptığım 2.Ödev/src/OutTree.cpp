/**
 * @file            OutTree.cpp
 * @description                 OutTree'nin kaynak dosyası.
 * @course                       1.Öğretim - C grubu
 * @assignment                2.Ödev
 * @date            27.12.2020
 * @author          Muhammet Kemal Güvenç - kemal.guvenc@ogr.sakarya.edu.tr
 */

#include "OutTree.hpp"

OutTree::OutTree(){
    root=NULL;
}

OutTreeNode* OutTree::find(OutTreeNode* node, string company_name) const{
    OutTreeNode *tmp;
    if(node!=NULL){
        if(node->company_name==company_name)
            return node;
        tmp=find(node->left,company_name);
        tmp=find(node->right,company_name);
    }
    if(tmp!=NULL) return tmp;
    return NULL;
}

unsigned int OutTree::height(OutTreeNode *node) const{
    if(node==NULL)
        return 0;
    return node->height;
}

OutTreeNode* OutTree::left_rotate(OutTreeNode *node) const{
    OutTreeNode* x=node->right;
    OutTreeNode* y=x->left;
    
    x->left = node;
    node->right = y;
    
    node->height = max(height(x->left), height(x->right))+1;
    x->height = max(height(node->left), height(node->right))+1;
    
    return y;
}

OutTreeNode* OutTree::right_rotate(OutTreeNode *node) const{
    OutTreeNode *x=node->left;
    OutTreeNode *y=x->right;
    
    x->right = node;
    node->left = y;
    
    node->height = max(height(node->left), height(node->right))+1;
    x->height = max(height(x->left), height(x->right))+1;
    
    return x;
}

int OutTree::get_balance(OutTreeNode *node) const{
    if (node == NULL)
        return 0;
    return height(node->left) - height(node->right);
}

OutTreeNode* OutTree::add(OutTreeNode *node, string company_name, string worker_name, unsigned int year) const{
    
    OutTreeNode *founded=find(node, company_name);
    
    if(founded==NULL){
        if(node==NULL){
            return new OutTreeNode(company_name, new InTree(worker_name, year));
        }
        node->left  = add(node->left, company_name, worker_name, year);
        
        node->height = 1 + max(height(node->left), height(node->right));
        
        int balance = get_balance(node);
        
        if (balance > 1 && 1 < node->left->count_worker)
            return right_rotate(node);
          
        if (balance < -1 && 1 > node->right->count_worker)
            return left_rotate(node);
          
        if (balance > 1 && 1 > node->left->count_worker){
            node->left =  left_rotate(node->left);
            return right_rotate(node);
        }
          
        if (balance < -1 && 1 < node->right->count_worker){
            node->right = right_rotate(node->right);
            return left_rotate(node);
        }
            return node;
    }
    
    else{
        founded->add_worker(worker_name, year);
        
        if(founded->right!=NULL && founded->count_worker>founded->right->count_worker){
            OutTreeNode *tmp_left=founded->left;
            int tmp_height=founded->height;
            
            OutTreeNode *right=founded->right;
            
            founded->left=right->left;
            founded->right=right->right;
            founded->height=right->height;
            
            right->left=tmp_left;
            right->right=founded;
            right->height=tmp_height;
            
            if(founded==node)
                return right;
            else return node;
        }
        
        else
            return node;
    }
    
}

void OutTree::post_order(OutTreeNode* node) const{
    if(node!=NULL){
        post_order(node->left);
        post_order(node->right);
        cout << node->company_name << endl;
        node->workers->post_order(node->workers->root);
        cout << endl;
    }
}
