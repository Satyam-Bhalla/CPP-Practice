#include <bits/stdc++.h>

using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int d){
            data = d;
            next = NULL;
        }
};


void print(node *head){
    while(head != NULL){
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << " NULL "<< endl;
}

int length(node *head){
    int count = 0;
    while(head!=NULL){
        head = head->next;
        count++;
    }
    return count;
}

void insertAtHead(node *&head,int val){
    if(head==NULL){
        head = new node(val);
        return;
    }
    node* temp = new node(val);
    temp->next = head;
    // (*temp).next = head; 
    head=temp;
}

void insertAtTail(node *&head, int val){
    // List is empty
    if(head==NULL){
        head = new node(val);
        return;
    }
    // List is not empty
    node *curr = head;
    while(curr->next != NULL){
        curr = curr -> next;
    }
    node *temp = new node(val);
    curr->next = temp;
}

void insertAtMiddle(node *&head,int pos, int val){
    if(head == NULL || pos<=0){
        insertAtHead(head,val);
        return;
    }else if(pos>length(head)){
        insertAtTail(head,val);
        return;
    }

    // Pos -1 jumps
    node* curr = head;
    for(int i=0;i<pos-1;i++){
        curr = curr -> next;
    }
    node* temp = new node(val);
    temp->next = curr -> next;
    curr->next = temp;
}


void deleteAtHead(node *&head){
    if(head==NULL){
        return;
    }
    node *temp = head;
    head = head->next;
    delete temp;
}

void deleteAtTail(node *&head){
    node *curr = head;
    while(curr->next->next != NULL){
        curr = curr->next;
    }
    node *temp = curr->next;
    curr -> next = NULL;
    delete temp;
}

void deleteAtMiddle(node *&head,int pos){
    if(head==NULL){
        return;
    }else if(pos>length(head)){
        deleteAtTail(head);
        return;
    }else if(pos<=0){
        deleteAtHead(head);
        return;
    }
    node *curr = head;
    for(int i=0;i<pos-1;i++){
        curr = curr -> next;
    }
    node *temp = curr->next;
    curr->next = temp->next;
    delete temp;
}

bool search(node *head,int key){
    node *curr =head;
    while(curr != NULL){
        if(curr->data == key) return 1;
        curr = curr->next;
    }
    return 0;
}

bool searchRecursive(node *head,int key){
    if(head==NULL) return 0;
    if(head->data==key) return 1;
    return searchRecursive(head->next,key);
}

void reverseList(node *&head){
    node *prev = NULL, *curr = head, *fwd=head;
    while(curr != NULL){
        fwd = fwd->next;
        curr->next = prev;
        prev = curr;
        curr = fwd;
    }
    head = prev;
}

int main(){
    node *head = NULL;
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    insertAtTail(head,5);
    insertAtMiddle(head,3,4);
    print(head);
    cout << "Length is " << length(head) << endl;
    if(search(head,6)){
        cout << "Element is available"<< endl;
    }else{
        cout << "Element is not available" << endl;
    }

    reverseList(head);
    print(head);
    return 0;
}