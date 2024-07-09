#include <iostream>
using namespace std;

class stack
{
    public:
        int top;
        int size;
        int *S;

        stack(int size);
        void push(int x);
        int pop();
        int peek(int index);
        bool isEmpty();
        bool isFull();
        void display();
        int stackTop();

};

stack::stack(int size)
{
    this->size=size;
    top=-1;
    S = new int [size];
}

void stack::push(int x)
{
    if (top==size-1)
    {
        cout<<"Stack Overflow!!!"<<endl;
    }
    else
    {
        top++;
        S[top]=x;
    }
}

int stack::pop()
{
    int x=-1;
    if (top==-1)
    {
        cout<<"Stack Underflow!!!"<<endl;
    }
    else
    {
        x=S[top];
        top--;
        return x;
    }
    return x;
}

int stack::peek(int index)
{
    int x=-1;
    if (top-index+1 <0)
    {
        cout<<"Invalid Position";
        return -1;
    }
    else
    {
        x=S[top-index+1];
        return x;
    }
}

bool stack::isEmpty()
{
    if (top==-1)
    {
        return true;
    }
    return false;
}

bool stack::isFull()
{
    if (top==size-1)
    {
        return true;
    }
    return false;
}

void stack::display()
{
    for (int i=top;i>=0;i--)
    {
        cout<<S[i]<<" ";
    }
    cout<<endl;
}


int stack::stackTop()
{
    if(isEmpty())
    {
        return -1;
    }
    return S[top];
}

int main()
{

stack s(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);
s.push(60);
s.push(70);
s.push(80);
s.push(80);
s.push(80);
s.push(80);
s.push(80);
s.push(80);

s.pop();
s.pop();
s.pop();
s.pop();
s.pop();
s.pop();
s.pop();
s.pop();
s.pop();
s.pop();
s.pop();
s.pop();



if(s.isFull())
{
    cout<<"is full";
}
cout<<endl;
if(s.isEmpty())
{
    cout<<"is empty";
}
cout<<endl;
s.display();


}