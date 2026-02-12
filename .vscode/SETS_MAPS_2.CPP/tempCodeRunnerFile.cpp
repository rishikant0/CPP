void levelOrderQueue(Node* root){   //BFS(Breadth First Search)
//     queue<Node*> q;
//     q.push(root);
//     while(q.size()>0){
//         Node* temp=q.front();
//         q.pop();
//         cout<<temp->val<<" ";
//         if(temp->left!=NULL)q.push(temp->left);
//         if(temp->right!=NULL)q.push(temp->right);

//     }
//     cout<<endl;
// }

// int level(Node* root){
//     if(root==NULL) return 0;
//     return 1 + max(level(root->left),level(root->right));
// }

// void nthLevel(Node* root,int curr, int level){
//     if(root==NULL) return;  //base work
//     if(curr==level){
//         cout<<root->val<<" ";   //root
//         return;
//     }
//     nthLevel(root->left,curr+1,level);    //left
//     nthLevel(root->right,curr+1,level);   //right

// }
// void levelOrder(Node* root){
//     int n=level(root);
//     for(int i=1;i<=n;i++){
//         nthLevel(root,1,i);
//         cout<<endl;
//     }
// }
