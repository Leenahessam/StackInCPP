#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;


template <typename T>
class Stack
{
    private:

     T *my_array;
     int Size;

    public:
        Stack();
        Stack(T value, int);
        void display ();
        T& top ();
        void pop();
        int getSize();
        void push (T value);
        virtual ~Stack();

    protected:


};


template class Stack <int>;
template class Stack <float>;
template class Stack <char>;
template class Stack <string>;

#endif // STACK_H
