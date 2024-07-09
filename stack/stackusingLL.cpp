#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

class stack
{
public:
    node *top;

    stack();
    void push(int x);
    int pop();
    bool isEmpty();
    bool isFull();
    int stackTop();
    int peek(int pos);
    void display();
};

stack::stack()
{
    top = nullptr;
}

bool stack::isEmpty()
{
    if (!top)
    {
        return true;
    }
    return false;
}

bool stack::isFull()
{
    node *t = new node;
    if (!t)
    {
        return true;
    }
    return false;
}

void stack::push(int x)
{
    if (isFull())
    {
        cout << "Stack Overflow!!!" << endl;
    }
    else
    {
        node *t = new node;
        t->data = x;
        t->next = top;
        top = t;
    }
}

int stack::pop()
{
    int x = -1;
    if (isEmpty())
    {
        cout << "Stack Underflow!!!" << endl;
    }
    else
    {
        x = top->data;
        top = top->next;
        return x;
    }
    return x;
}

int stack::stackTop()
{
    if (top)
    {
        cout<< top->data;
    }
    return 0;
}

int stack::peek(int pos)
{
    node *t = new node;
    t = top;
    for (int i = 0; i < pos - 1; i++)
    {
        t = t->next;
    }
    return t->data;
}

void stack::display()
{
    if (isEmpty())
    {
        cout << "Stack is empty:";
    }
    else
    {
        node *t = new node;
        t = top;
        while (t)
        {
            cout << t->data << " ";
            t = t->next;
        }
    }
}

int main()
{
    stack s;

    for(int i=0;i<20;i++)
    {
        s.push(i+1);
    }

    for (int i=0;i<5;i++)
    {
        s.pop();
        cout<<" ";
        s.stackTop();
        cout<<endl;
    }

    s.display();
}