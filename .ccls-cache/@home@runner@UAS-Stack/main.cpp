#include <bits/stdc++.h>
#include <iostream>
#include <stack>
 
using namespace std;
#define MAX 5
 
class Stack {
    int top;
 
public:
    int a[MAX];
 
    Stack() { top = -1; }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};
 
bool Stack::push(int x)
{
    if (top >= (MAX - 1)) {
        cout << "Stack Overflow";
        return false;
    }
    else {
        a[++top] = x;
        return true;
    }
}
 
int Stack::pop()
{
    if (top < 0) {
        cout << "Stack Underflow";
        return 0;
    }
    else {
        int x = a[top--];
        return x;
    }
}
int Stack::peek()
{
    if (top < 0) {
        cout << "Stack is Empty";
        return 0;
    }
    else {
        int x = a[top];
        return x;
    }
}
 
bool Stack::isEmpty()
{
    return (top < 0);
}
 
int main()
{
    class Stack a;
  stack<int> b;
  
    a.push(5);
    a.push(8);
    a.push(1);
    a.push(2);
    a.push(9);

  cout << "a : ";
    for(int i = 0; i < 5; i++) {
      cout << a.a[i] << "  ";
    }
  cout << "  <- top";
  cout << endl;

  cout << "a : ";
  while(!a.isEmpty())
    {
        if(a.peek() % 2 == 1) {
          b.push(a.peek());
          a.pop();
        }
      else {
        cout << a.peek() << " ";
        a.pop();
      }
    }

  cout << "  <- top";
  cout << endl;


  cout << "b : ";
  while(!b.empty()) {
    cout << b.top() << " ";
    b.pop();
  }
  cout << "  <- top";
  cout << endl;
 
    return 0;
}