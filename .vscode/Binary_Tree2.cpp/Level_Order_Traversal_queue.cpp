#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void display(Node* root){
if(root==NULL) return;
cout<<root->val<<" ";
display(root->left);
display(root->right);
}
 void nthlevel(Node* root,int c,int level){
    if(root==NULL) return ;//base case
    if(c==level) cout<<root->val<<" ";//root
    nthlevel(root->left,c+1,level);//lefft
    nthlevel(root->right,c+1,level);//right
    }
void level(Node* root){
   queue<Node*> q;
   q.push(root);
   while(q.size()>0){
    Node* temp=q.front();
    q.pop();
    cout<<temp->val<<" ";
    if(temp->right!=NULL) q.push(temp->right);
     if(temp->left!=NULL) q.push(temp->left);
   }
}
int main(){
Node* a=new Node(1);
Node* b=new Node(2);
Node* c=new Node(3);
Node* d=new Node(4);
Node* e=new Node(5);
Node* f=new Node(6);
Node* g=new Node(7);

a->left=b;
a->right=c;
b->right=e;
b->left=d;
c->left=f;
c->right=g;
//display(a);
nthlevel(a,1,3);// find the nth level 
}