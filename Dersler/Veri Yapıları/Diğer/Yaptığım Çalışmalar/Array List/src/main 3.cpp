#include "ArrayList.hpp"

int main(){

    ArrayList list;

    list.Add(5);
    list.Add(3);
    list.Add(54);
    list.Add(43);

    cout << list << endl << endl;

    list.Remove(5);
    
    cout << list << endl << endl;

    list.RemoveAt(1);

    cout << list << endl << endl;

    system("PAUSE");
    return 0;
}