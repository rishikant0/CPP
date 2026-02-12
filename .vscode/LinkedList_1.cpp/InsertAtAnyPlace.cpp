#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class Linkedlist{
public:
Node* head;
Node* tail;
int size;
Linkedlist(){
 head = tail = NULL;
 size=0;
}

//insert at end
void insertAtEnd(int val){
    Node*temp=new Node(val);
    if(size==0) head= tail= temp;
    else{
        tail->next=temp;
        tail=temp;
    }
    size++;
}

//insert at begain
void insertAtHead(int val){
    Node*temp=new Node(val);
    if(size==0) head= tail= temp;
    else{
        tail->next=temp;
        tail=temp;
    }
    size++;
}

//insert at inx;
void insertAtidx(int idx,int val){
    if(idx<0 || idx>size) cout<<"invalid Index"<<endl;
     else if(idx==0) insertAtHead(val);
     else if(idx==size) insertAtEnd(val);
     else{
        Node* t = new Node(val);
        Node* temp =head;
        for(int i=1;i<=idx-1;i++){
          temp=temp->next;
        }
        t->next=temp->next;
        temp->next=t;
        size++;
     }
}
void display(){
    Node* temp =head;
    while(temp!=NULL){
    cout<<temp->val<<" ";
    temp= temp->next;
}
cout<<endl;
}
};
int main(){
Linkedlist ll;
cout<<" insert at end"<<endl;
ll.insertAtEnd(10);
ll.display();
ll.insertAtEnd(20);
ll.display();
ll.insertAtEnd(90);
ll.display();
ll.insertAtEnd(32);
ll.display();
cout<<ll.size<<endl;
cout<<" insert at Head"<<endl;
ll.insertAtHead(80);
ll.display();
ll.insertAtHead(60);
ll.display();
ll.insertAtHead(50);
ll.display();
cout<<ll.size<<endl;
cout<<"insert at idx"<<endl;
ll.insertAtidx(3,77);
ll.display();
ll.insertAtidx(1,53);
ll.display();
}