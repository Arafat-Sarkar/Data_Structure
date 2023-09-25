#include<bits/stdc++.h>
using namespace std;
class Node
{
   public:
   int val;
   Node* left;
   Node* right;
   Node(int val)
   {
     this->val=val;
     this->left = NULL;
     this->right = NULL;
   }
};
Node* leveloder_input()
{
    int val;
    cin>>val;
    Node* root;
    if(val==-1)root=NULL;
    else root = new Node(val);
    queue<Node*>q;
    if(root) q.push(root);

    Node * prent= q.front();
    q.pop();

    int l,r;
    cin>>l>>r;
    Node*left;
    Node*right;
    if(l==-1) left = NULL;
    else left=new Node(l);
    if(r==-1) right==NULL;
    else right= new Node(r);
    prent->left = left;
    prent->right = right;
    if(prent->left)q.push(prent->left);
      if(prent->right)q.push(prent->right);
       return root;
}
void leveloder(Node * root)
{
    queue<Node*>q;
    q.push(root);
    
    while (!q.empty())
    {
        // Line thekhe ber kore ana
        Node* f= q.front();
        q.pop();
        // jabotio shob kaj kora
       cout<<f->val<<" ";
    //    tar childern gula ke rakhbo
      if(f->left)q.push(f->left);
      if(f->right)q.push(f->right);
    }
    
}
int main()
{
    Node* root = leveloder_input();
    leveloder(root);
    return 0;
}