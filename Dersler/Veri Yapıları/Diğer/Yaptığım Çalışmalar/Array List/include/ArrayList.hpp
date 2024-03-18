#ifndef ARRAYLIST_HPP
#define ARRAYLIST_HPP

#include <iostream>

using namespace std;

class ArrayList{
    private:
    int* items;
    int size;
    int capacity;

    public:

    ArrayList();
    ~ArrayList();
    void Reserve();
    int Size()const;
    bool IsEmpty()const;
    int IndexOf(const int&);
    const int& ElementAt(int) throw ();
    void Remove(const int&);
    void RemoveAt(int index);
    void Add(const int&);
    void Insert(const int&, int);
    const int& First();
    const int& Last();
    void Clear();
    friend ostream& operator<< (ostream&, ArrayList&);

};

#endif