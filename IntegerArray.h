#ifndef _INTEGERARRAY_H_
#define _INTEGERARRAY_H_

#include <iostream>

using namespace std;

class IntegerArray{

    private: //atributos
        int size;
        int current;
        int pos;
        int elem;
        
    public: //metodos
        int *arr;
        IntegerArray(){
            this->current = 0;
            this->size = 0;
            this->arr = new int[this->size];
        }
        IntegerArray(int size) { //constructor 1
            this->current = 0;
            this->size = size;
            this->arr = new int[this->size];            
        }

        IntegerArray(const IntegerArray &o) {  //constructor 2
            this->size = o.size;
            this->arr = new int[this->size];
            for(int i = 0; i < this->size; i++)
                this->arr[i] = o.arr[i];
        }

        void insert(int elem, int pos) {
            
            if(this->current <= this->size){// inserta los elementos
                this->arr[pos] = elem;     
                this->current += 1; 
            }
            if(pos+1 > this->size){//si sobrepasa el limite de elementos, se ejecuta
                cout << "Error, se salio del limite de " 
                << this->size << " elementos." << endl;
            }
        }

        void push_back(int elem) { //current es el ultimo elemento
            
            this->arr[this->current] = elem;

        }

        void remove_back() {//igualar a cero para reusar la posicion
            
            this->arr[this->current] = 0;
        }

        void remove(int pos) {//igualar a cero cualquier posicion para reusar la posicion
            
            this->arr[pos] = 0;
        }

        int getSize() const {//retorna el tamaño
            
            return this->size;
        }

        bool isEmpty () const { //analiza si hay elementos o no 
            return (this->size > 0 ? false : true); //retorna true si no hay elementos
        }

        bool isFull() const { //analiza si hay elementos o no
            return (this->size > 0 ? true : false); // retorna true si hay elementos
        }

        void print() const {
            cout << "[ ";
            for(int i = 0; i < this->size; i++)
                cout << arr[i] << " ";
            cout << "]" << endl;
        }

        ~IntegerArray() {
            delete[] arr;
        }       

};

#endif