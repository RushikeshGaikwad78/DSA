#include <iostream>
#include <cstring>
using namespace std;

const int MAX_SIZE = 100;

class stack
{
    public:
        int top;
        char s[MAX_SIZE];


        stack();
        void push(char x);
        char pop();
        bool isEmpty();
        bool isFull();
        bool parenthesisBalanced(char expr[]);
};

stack::stack()
{
    top=-1;
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
    if (top==MAX_SIZE-1)
    {
        return true;
    }
    return false;
}

void stack::push(char x)
{
    if(isFull())
    {
        cout<<"Stack is OverLoaded!!!"<<endl;
    }  
    else
    {
        top++;
        s[top]=x;  
    } 
}

char stack::pop()
{
    if(isEmpty())
    {
        cout<<"Stack is UnderLoaded!!!"<<endl;
    }
    else
    {
        return s[top--];
    }
}

bool stack::parenthesisBalanced(char expr[])
{
    int n = strlen(expr);

    for (int i=0; i <n ; i++)
    {
        if (expr[i]=='(' || expr[i]=='{' ||expr[i]=='[' )
        {
            push(expr[i]);
        }

        else if (expr[i]==')' || expr[i]=='}' ||expr[i]==']' )
        {
            if(isEmpty())
            {
                return false;
            }

            char x = pop();
            if (expr[i]==')' && x!='(' || expr[i]=='}' && x!='{' ||expr[i]==']' && x!='[' )
            {
                return false;
            }

        }

    }
    return isEmpty();
}

int main()
{

    stack s;
    char expression[MAX_SIZE];

    string choice;

    do
    {
        cout<<"Enter the expression:";
    cin>>expression;


        if (s.parenthesisBalanced(expression))
            {
        cout<<"Expression is Balanced!!!"<<endl;
    }
    else
    {
        cout<<"Expression is not Balanced!!!"<<endl;
    }

    cout<<"do you want to continue(y/n)"<<endl;
    cin>>choice;
    } while (choice!="n");
    
    
}