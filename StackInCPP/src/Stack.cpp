#include "Stack.h"

template<typename T>
Stack<T>::Stack()
{

}

template<typename T>
Stack<T>::Stack(T value, int initial_size)
{
    my_array = new T [initial_size];
    Size = initial_size;
    for (int i=0;i<initial_size;i++)
        my_array[i] = value;

    my_array[-1]= '\0';

}

template<typename T>
T& Stack<T>::top(){
    return my_array[0];
}


template<typename T>
void Stack<T>::pop(){
    for (int i = 0; i < (Size-1); i++)
        my_array[i]=my_array[i+1];
    Size--;
}


template<typename T>
void Stack<T>::display()
{

    for (int i=0 ; i<(Size); i++)
        cout<<my_array[i]<<" ";
    cout << endl;
}


template<typename T>
int Stack<T>::getSize ()
{
    return Size;
}

template<typename T>
void Stack<T>::push (T value)
{
    T *temp_array;
    temp_array = new T [Size];
    for (int i = 0; i < Size ; i++)
        temp_array[i] = my_array[i];

    my_array = new T [Size+1];
    Size++;
    my_array[0] = value;
    int j = 0;
    for (int i = 1; i < Size; i++ ){
        my_array[i] = temp_array [j];
        j++;
    }

}

template<typename T>
Stack<T>::~Stack(){
 delete[]my_array;
}
