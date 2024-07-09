#include <iostream>
#include <queue>
using namespace std;

class treeNode
{
private:
    int data;
    treeNode *left;
    treeNode *right;

public:
    treeNode()
    {
        data = 0;
        left = nullptr;
        right = nullptr;
    }

    treeNode(int x)
    {
        data = x;
        left = nullptr;
        right = nullptr;
    }

    friend class tree;
};

class tree
{
private:
    treeNode *root;

public:
    tree()
    {
        root = nullptr;
    }

    tree(int x)
    {
        root = new treeNode(x);
    }

    treeNode *createBT(treeNode *&root)
    {
        int d;
        cout << "Enter data to be inserted: ";
        cin >> d;

        if (d == -1)
        {
            return nullptr;
        }

        root = new treeNode(d);

        cout << "Enter data to the left of " << d << endl;
        root->left = createBT(root->left);
        cout << "Enter data to the right of " << d << endl;
        root->right = createBT(root->right);

        return root;
    }

    void levelOrderTraversal(treeNode *&root)
    {
        queue<treeNode *> q;
        q.push(root);
        q.push(nullptr);

        while (!q.empty())
        {
            treeNode *temp = q.front();
            q.pop();

            if (temp == nullptr)
            {
                if (!q.empty())
                {
                    q.push(nullptr);
                    cout << endl;
                }
            }
            else
            {
                cout << temp->data << " ";

                if (temp->left)
                {
                    q.push(temp->left);
                }

                if (temp->right)
                {
                    q.push(temp->right);
                }
            }
        }
    }

    void inorder(treeNode *&root)
    {
        if (root == nullptr)
        {
            return;
        }
        else
        {
            inorder(root->left);
            cout << root->data;
            inorder(root->right);
        }
    }

    void preorder(treeNode *&root)
    {
        if (root == nullptr)
        {
            return;
        }
        else
        {
            cout << root->data;
            preorder(root->left);
            preorder(root->right);
        }
    }

    void postorder(treeNode *&root)
    {
        if (root == nullptr)
        {
            return;
        }
        else
        {
            postorder(root->left);
            postorder(root->right);
            cout << root->data;
        }
    }

};

    int main()
    {
        tree t;
        treeNode *root = nullptr;
        t.createBT(root);
        cout<<endl;
        cout<<"LEVEL ORDER TRAVERSAL : ";
        t.levelOrderTraversal(root);
        cout<<endl;
        cout<<"INORDER : ";
        t.inorder(root);
        cout<<endl;
        cout<<"PREORDER : ";
        t.preorder(root);
        cout<<endl;
        cout<<"POSTORDER : ";
        t.postorder(root);
      
    }
