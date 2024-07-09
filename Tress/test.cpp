#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class Node 
{
    public:
        int data;
        Node *left, *right;

        Node() 
        {
            data = 0;
            left = right = nullptr;
        }

        Node(int d) 
        {
            data = d;
            left = right = nullptr;
        }

        friend class binarytree;
};

class binarytree 
{
    public:

    binarytree() 
    {
            root = buildTree();
    }

    Node* buildTree() 
    {
        // cout<<"INPUT THE BINARY TREE:"<<endl;
        cout << "\nData (-1: Null): ";
        int d;
        cin >> d;

        if (d == -1)
            return nullptr;


        else
        {
            Node* root = new Node(d);

            cout << "Enter data for left of " << d << endl;
            root->left = buildTree();

            cout << "Enter data for right of " << d << endl;
            root->right = buildTree();

            
            // if (root->left == nullptr && root->right == nullptr) 
            // {
            //     cout << "Both left and right are -1. Stopping tree building.\n";
                
            //     return nullptr;
            // }

            return root;
        }

        
    }

    void recswap(Node* root) 
    {
        if (root == nullptr)
            return;

        if (root->left || root->right) 
        {
            Node* temp = root->left;
            root->left = root->right;
            root->right = temp;
        }
        recswap(root->right);
        recswap(root->left);
    }

    Node* recCopy(Node* root) 
    {
        if (root == nullptr)
            return nullptr;

        Node* rootCopy = new Node(root->data);
        rootCopy->right = recCopy(root->right);
        rootCopy->left = recCopy(root->left);

        return rootCopy;
    }

        
        int recHeight(Node* node) 
        {
            if (node == nullptr)
                return 0;

            int l = recHeight(node->left);
            int r = recHeight(node->right);

            return max(l, r) + 1;
        }

        
        int recLeafCount(Node* root) 
        {
            if (root == NULL)
                return 0;
            else if (root->left == NULL && root->right == NULL)
                return 1;
            else
                return recLeafCount(root->right) + recLeafCount(root->left);
        }

        

        void recDeleteTree(Node* root) 
        {
            if (root == NULL)
                return;

            recDeleteTree(root->left);
            recDeleteTree(root->right);

            cout << "\n Deleting node: " << root->data;
            delete root;
        }

        

        void recpreorder(Node* root) 
        {
            if (root == NULL)
                return;

            cout << root->data << " ";
            recpreorder(root->left);
            recpreorder(root->right);
        }

        void recinorder(Node* root) 
        {
            if (root == NULL)
                return;

            recinorder(root->left);
            cout << root->data << " ";
            recinorder(root->right);
        }

        void recpostorder(Node* root) 
        {
            if (root == NULL)
                return;

            recpostorder(root->left);
            recpostorder(root->right);
            cout << root->data << " ";
        }


        Node* root = nullptr;

        

        void operator=(binarytree& Tree) 
        {
            this->root = recCopy(Tree.root);
        }

        void iinorder() 
        {
            Node* curr = root;
            stack<Node*> Stack;
            while (!Stack.empty() || curr != nullptr) 
            {
                while (curr != nullptr) {
                    Stack.push(curr);
                    curr = curr->left;
                }
                curr = Stack.top();
                Stack.pop();
                cout << curr->data << " ";
                curr = curr->right;
            }
        }

        void ipreorder() 
        {
            if (root == nullptr)
                return;

            stack<Node*> Stack;
            Stack.push(root);
            while (!Stack.empty()) {
                Node* poppedNode = Stack.top();
                Stack.pop();
                cout << poppedNode->data << " ";
                if (poppedNode->right)
                    Stack.push(poppedNode->right);
                if (poppedNode->left)
                    Stack.push(poppedNode->left);
            }
        }

        void ipostorder() 
        {
            stack<Node*> s1, s2;
            s1.push(root);

            while (!s1.empty()) 
            {
                Node* temp = s1.top();
                s1.pop();
                s2.push(temp);
                if (temp->right)
                    s1.push(temp->right);
                if (temp->left)
                    s1.push(temp->left);
            }

            while (!s2.empty()) 
            {
                cout << s2.top()->data << " ";
                s2.pop();
            }
        }
};

int main() 
{

    cout<<"INPUT THE BINARY TREE:"<<endl;

    binarytree Tree;
    binarytree TreeCopy;
    int choice;

    do {
        cout << "\n\nMenu:\n";
        cout << "1. Inorder, Preorder, Postorder Traversal\n";
        cout << "2. Swap left and right pointers at every node\n";
        cout << "3. Find the height of the tree\n";
        cout << "4. Copy this tree to another tree\n";
        cout << "5. Count number of leaves and internal nodes\n";
        cout << "6. Erase all nodes in a binary tree\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
        {
            case 1:
                cout << "Inorder Traversal: ";
                Tree.iinorder();
                cout << "\nPreorder Traversal: ";
                Tree.ipreorder();
                cout << "\nPostorder Traversal: ";
                Tree.recpostorder(Tree.root);
                break;
            case 2:
                if (Tree.root==nullptr)
                {
                    cout<<"TREE IS NOT PRESENT:"<<endl;
                    break;
                }
                Tree.recswap(Tree.root);
                cout << "\nLeft and right pointers swapped at every node.\n";
                break;
            case 3:
            if (Tree.root==nullptr)
                {
                    cout<<"TREE IS NOT PRESENT:"<<endl;
                    break;

                }
                cout << "\nRecursive Height: " << Tree.recHeight(Tree.root);
                break;
            case 4:
            if (Tree.root==nullptr)
                {
                    cout<<"TREE IS NOT PRESENT:"<<endl;
                    break;

                }
                TreeCopy = Tree;
                cout << "\nTree copied successfully.\n";
                break;
            case 5:
            if (Tree.root==nullptr)
                {
                    cout<<"TREE IS NOT PRESENT:"<<endl;
                    break;

                }
                cout << "\nNumber of Leaves: " << Tree.recLeafCount(Tree.root);
                cout << "\nNumber of Internal Nodes: " << Tree.recLeafCount(Tree.root) - 1;
                break;
            case 6:
            if (Tree.root==nullptr)
                {
                    cout<<"TREE IS NOT PRESENT:"<<endl;
                    break;

                }
                Tree.recDeleteTree(Tree.root);
                Tree.root = nullptr;
                cout << "\nTree erased successfully.\n";
                break;
            case 0:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }
    } while (choice != 0);

    return 0;
}