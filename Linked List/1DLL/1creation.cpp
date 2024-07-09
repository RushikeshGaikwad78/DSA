#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node()
    {
        data = 0;
        next = nullptr;
    }
    Node(int x)
    {
        data = x;
        next = nullptr;
    }

    
};

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    Node *head = new Node(arr[0]);
    Node *temp = head;
    for (int i = 1; i < 5; i++)
    {
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }

    Node* current = head;
    while(current){
        cout<<current->data<<" ";
        current=current->next;
    }
    cout<<endl;
}