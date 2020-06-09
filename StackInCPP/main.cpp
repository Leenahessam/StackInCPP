#include <iostream>
#include <Stack.h>

using namespace std;

int main()

{
  Stack<int> object;
  Stack<int> obj (10, 5);
  cout << "Original Stack : ";
  obj.display();
  obj.push(15);
  cout << endl;
  cout << "after pushing an element on the top : ";
  obj.display();
  cout << endl;
  cout << "top : "<< obj.top() << endl;
  cout << "after popping first element : ";
  obj.pop();
  obj.display();
  cout << endl;
  cout << "Size of Stack : "<< obj.getSize()<<endl;
}
