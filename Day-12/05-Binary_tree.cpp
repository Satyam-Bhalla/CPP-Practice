#include <iostream>

using namespace std;

class node{
    public:
        int data;
        node *left = NULL;
        node *right = NULL;
        node(int d){
            data=d;
        }
};
//     10
// NULL   NULL
// 10 -1 -1
    //         1
    //     2       3
    //  4     5  -1  -1
    //-1 -1 -1 -1

node* buildTree(){
    int d;
    cin >> d;

    // Base case
    if(d==-1){
        return NULL;
    }
    node  *root = new node(d);
    root->left = buildTree();
    root->right = buildTree();

    return root;
}

// Preorder Traversal
void printPreorder(node *root){
    if(root==NULL) return;
    // Root Left Right
    cout << root->data << " ";
    printPreorder(root->left);
    printPreorder(root->right);
}

// Inorder Traversal
void printInorder(node *root){
    if(root==NULL){
        return;
    }
    // Left Root Right
    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}

// Postorder Traversal
void printPostorder(node *root){
    if(root==NULL){
        return;
    }
    // Left Right Root
    printPostorder(root->left);
    printPostorder(root->right);
    cout << root->data << " ";
}



int main(){
    // node *root = new node(1);
    // root->left = new node(2);
    // root->right = new node(3);
    // root->left->left = new node(4);
    // root->left->right = new node(5);

    node *root = buildTree();
    printPreorder(root);
    cout << endl;
    printInorder(root);
    cout << endl;
    printPostorder(root);
    return 0;
}