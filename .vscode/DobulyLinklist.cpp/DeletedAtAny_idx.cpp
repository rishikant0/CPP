#include<iostream>
using namespace std;
class Node{
public:
int val;
Node* next;
Node* pre;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->pre=NULL;
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
void display(){
    Node* temp =head;
    while(temp!=NULL){
    cout<<temp->val<<" ";
    temp= temp->next;
}
cout<<endl;
}
void deletedAthead(){
if(size==0){
    cout<<" list is empty";
    return;
}
head=head->next;
if(head) head->pre=NULL;
if(head==NULL) tail=NULL;
size--;

}
void deletedAtEnd(){
if(size==0){
    cout<<"List is empty ";
    return ;
}
Node* temp=tail->pre;
temp->next=NULL;
tail=temp;
size--;
}
void deletedAtidx(int idx){
    if(size==0){
        cout<<"List is empty";
        return;
    }
    else if(idx<0 || idx>=size){
        cout<<"Invaild index";
        return ;
    }
    else if(idx==0) return deletedAthead();
    else if(idx==size-1) return deletedAtEnd();
    else{
        Node* temp=head;
        for(int i=1;i<idx-1;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        temp->next->pre=temp;
        size--;
    }
}    
};

int main(){
Linkedlist ll;
ll.insertAtEnd(34);
ll.insertAtEnd(10);
ll.insertAtEnd(20);
ll.insertAtEnd(30);
ll.insertAtEnd(40);
ll.insertAtEnd(50);
ll.insertAtEnd(60);
ll.insertAtEnd(70);
ll.insertAtEnd(80);
ll.insertAtEnd(94);
ll.display();
//Deteted AT head
ll.deletedAthead();
ll.display();
ll.deletedAtEnd();
ll.display();
ll.deletedAtidx(3);
ll.display();
}