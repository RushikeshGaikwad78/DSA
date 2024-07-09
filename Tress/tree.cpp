#include <iostream>
#include <queue>
using namespace std;

class treeNode{
    private:
        int data;
        treeNode *lchild;
        treeNode *rchild;

    public:
        treeNode(int v){
            data = v;
            lchild=rchild=nullptr;
        }
        friend class tree;
};

class tree{

    public:
        treeNode *root;

        tree(){
            root=nullptr;
        }

        

};