#include <iostream>
#include <queue>
#include <climits>

using namespace std;


// left <= root < right

class node{
    public:
        int data;
        node *left = NULL;
        node *right = NULL;
        node(int d){
            data=d;
            left=NULL;
            right=NULL;
        }
};


node* insertInBST(node *root,int data){
    // Base case
    if(root==NULL){
        return new node(data);
    }

    // Rec case - Insert in the subtree and update the pointers
    if(data<=root->data){
        root->left = insertInBST(root->left,data);
    }else{
        root->right = insertInBST(root->right,data);
    }
    return root;
}

// 5 2 3 4 8 9 -1
node* build(){
    int d;
    cin >> d;
    node *root = NULL;
    while(d!=-1){
        root = insertInBST(root,d);
        cin >> d;
    }
    return root;
}


bool search(node *root,int data){
    if(root==NULL){
        return false;
    }
    if(root->data==data){
        return true;
    }

    // Recursively search in left and right
    if(data<root->data){
        return search(root->left,data);
    }else{
        return search(root->right,data);
    }
}

void bfs(node *root){
    queue<node*> q;

    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node *f = q.front();
        if(f==NULL){
            cout << endl;
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout << f->data << " ";
            q.pop();
            if(f->left){
                q.push(f->left);
            }
            if(f->right){
                q.push(f->right);
            }
        }
    }
    return;
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



bool isBST(node *root,int minV = INT_MIN, int maxV=INT_MAX ){
    if(root==NULL){
        return true;
    }

    if(root->data >= minV && root->data <= maxV && isBST(root->left,minV,root->data) && isBST(root->right,root->data,maxV)){
        return true;
    }

    return false;
}



node* deleteInBST(node* root, int data){
    if(root==NULL){
        return NULL;
    }else if(data<root->data){
        root->left = deleteInBST(root->left,data);
        return root;
    }else if(data==root->data){
        /*
            3 cases in BST when you got the data
            1.) Node with no child/leaf node
            2.) Node with a single child
            3.) Node with 2 children
        */

        //  1.) Node with no child/leaf node
       if(root->left==NULL && root->right==NULL){
           delete root;
           return NULL;
       }

       //  2.) Node with a single child
       if(root->left!=NULL && root->right==NULL){
           node *temp = root->left;
           delete root;
           return temp;
       }
       if(root->left==NULL && root->right !=NULL){
           node *temp = root->right;
           delete root;
           return temp;
       }

       // 3.) Node with 2 children
       node* replace = root->right;
       while(replace->left !=NULL){
           replace = replace->left;
       }

       root->data = replace->data;
       root->right = deleteInBST(root->right,replace->data);
       return root;

    }else{
        root->right = deleteInBST(root->right,data);
        return root;
    }
}






int main(){
    node *root = build();
    printInorder(root);
    cout << endl;
    if(isBST(root)){
        cout << "It is a valid BST" << endl;
    }else{
        cout << "Not a BST" << endl;
    }

    cout << "BFS of a binary search tree is: " << endl;
    bfs(root);

    return 0;
}