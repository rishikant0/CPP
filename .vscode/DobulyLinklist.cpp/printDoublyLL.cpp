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
 void display(Node* head){
 while(head){
    cout<<head->val<<" ";
    head= head->next;
 }
 }
int main(){
    Node* a= new Node(10);
    Node* b= new Node(20);
    Node* c= new Node(30);
    Node* d= new Node(40);
    Node* e= new Node(50);
    Node* f= new Node(60);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;

     a->pre=b;
    b->pre=c;
    c->pre=d;
    d->pre=e;
    e->pre=f;
    display(a);
  
}