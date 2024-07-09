#include <iostream>
using namespace std;

const int MAX_SIZE=100;

template <class T>
class stack
{
    public:
        int top;
        int size;
        T *s;

        stack(int k)
        {
            size=k;
            top=-1;
            s = new T[size];
        }

        void push(char x)
        {
            if(isFull())
            {
                cout<<"Stack OverLoaded!!!"<<endl;
            }
            else
            {
                top++;
                s[top]=x;
            }
        }

        char pop()
        {
            
            if(isEmpty())
            {
                cout<<"Stack UnderLoaded!!!"<<endl;
                return -1;
            }
            else
            {
                T x=s[top];
                top--;
                return x;
            }
            
        }



        bool isEmpty()
        {
            if (top==-1)
            {
                return true;
            }
            return false;
        }

        bool isFull()
        {
            if (top==MAX_SIZE-1)
            {
                return true;
            }
            return false;
        }

        T getTop()
        {
           
                return s[top];
            
        }
};


bool isOpreand(char a)
{
    if(a=='+' || a=='-' || a=='*' || a=='/' || a=='(' || a==')')
    {
        return false;
    }
    return true;
}

int pre(char a)
{
    if(a=='+' || a=='-')
    {
        return 1;
    }
    else if(a=='*' || a=='/')
    {
        return 2;
    }
    else if (a=='(')
    {
        return 3;
    }
    return 0;
}

string inToPost(string s)
{
    string post="";
    stack<char> st(100);

    int n = s.size();

    for(int i=0;i<n;i++)
    {
        if(isOpreand(s[i]))
        {
            post = post + s[i];
        }

        else if(s[i]==')')
        {
            while(st.getTop()!='(')
            {
                post=post+st.pop();
            }
            st.pop();
        }

        else
        {
            if(st.isEmpty())
            {
                st.push(s[i]);
            }
            else
            {
                while(!st.isEmpty() && st.getTop()!='(' && pre(s[i])<=pre(st.getTop()))
                {
                    post = post + st.pop();
                }
                st.push(s[i]);
            }
        }
    }

    while(!st.isEmpty())
    {
        post = post + st.pop();
    }

    return post;

}


int main()
{
    string s;
    cout<<"string::";
    cin>>s;

    cout<<inToPost(s)<<endl;
}

