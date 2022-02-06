#include <iostream>
#include<queue>

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


int h=0;
void calculateHeight(node *root,int depth){
    //Base case
    if(root==NULL){
        h = max(h,depth);
        return;
    }

    calculateHeight(root->left,depth+1);
    calculateHeight(root->right,depth+1);

}


int height(node *root){
    // Base case
    if(root==NULL){
        return 0;
    }
    int h1 = height(root->left);
    int h2 = height(root->right);
    return max(h1,h2)+1;

}


void printNthLevel(node *root,int n){
    //Base case 1
    if(root==NULL){
        return;
    }

    // Base case 2
    if(n==1){
        cout << root->data << " ";
        return;
    }

    printNthLevel(root->left,n-1);
    printNthLevel(root->right,n-1);
}



void printAllLevels(node *root){
    int h = height(root);
    for(int i=1;i<=h;i++){
        printNthLevel(root,i);
        cout << endl;
    }
}

// Count all the nodes in a tree
int count(node *root){
    if(root==NULL){
        return 0;
    }
    return 1+count(root->left)+count(root->right);
}

void mirror(node *root){
    if(root==NULL){
        return;
    }
    swap(root->left,root->right);
    mirror(root->left);
    mirror(root->right);
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


node* buildTreeFromArray(int *a,int s, int e){
    if(s>e){
        return NULL;
    }

    int mid = (s+e)/2;
    node *root = new node(a[mid]);
    root->left = buildTreeFromArray(a,s,mid-1);
    root->right = buildTreeFromArray(a,mid+1,e);
    return root;
}


int main(){
    // node *root = new node(1);
    // root->left = new node(2);
    // root->right = new node(3);
    // root->left->left = new node(4);
    // root->left->right = new node(5);

    node *root = buildTree();
    cout << "Preorder traversal: ";
    printPreorder(root);
    cout << endl;
    cout << "Inorder traversal: ";
    printInorder(root);
    cout << endl;
    cout << "Postorder traversal: ";
    printPostorder(root);
    cout << endl;

    calculateHeight(root,0);
    cout << "Height of the tree is: " << h << endl;

    cout << "Nth level of a tree is: " << endl;
    printNthLevel(root,3);

    cout << endl << "Complete tree is: " << endl;
    printAllLevels(root);

    cout << "Total number of nodes are " << count(root) << endl;

    cout << endl << endl;
    mirror(root);
    cout << "All the elements \n";
    printAllLevels(root);

    cout << "BFS on a binary tree is: " << endl;
    bfs(root);


    int a[] = {1,2,3,4,5,6,7,8};
    int n = 8;
    node *root2 = buildTreeFromArray(a,0,n-1);
    cout << "New binary tree looks like " << endl;
    bfs(root2);



    return 0;
}