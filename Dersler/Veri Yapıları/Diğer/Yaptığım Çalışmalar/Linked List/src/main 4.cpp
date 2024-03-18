#include "LinkedList.hpp"

using namespace std;

int main(){

    LinkedList list;

    list.Add("Kemal");
    list.Add("Ahmet");
    list.Add("Fatih");
    list.Add("Sinan");
    list.Add("Rabia");
    list.Insert(3,"Coskun");

    cout << list << endl;

    list.Remove("Kemal");
    
    cout << list << endl;

    list.RemoveAt(3);

    cout << list << endl;

    system("PAUSE");
    return 0;
}