#include <iostream>
#include "IntegerArray.h"

using namespace std;

int main(){
    
    IntegerArray a(6);
    
    a.insert(11,0);
    a.insert(12,1);
    a.insert(13,2);
    a.insert(14,3);
    a.insert(15,4);
    a.push_back(20);
    a.remove_back();
    a.remove(3);
    cout << "Tamaño: "<< a.getSize() << endl;
    cout << "Esta vacio? " << a.isEmpty() << endl;
    cout << "Esta lleno? " << a.isFull() << endl;
    a.print();

}