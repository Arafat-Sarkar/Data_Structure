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
void level_oder(Node *root)
{
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        // 1st kaj ber kore ana
        Node * f=q.front();
        q.pop();
        
        // 2nd jabotiyo shob kaj 
        cout<<f->val<<" ";
        
        // 3rd tar childer gula ke rakha

        if(f->left) q.push(f->left);
        if(f->right)q.push(f->right);
    }
}

int main()
{
    Node * root = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * c = new Node(40);
    Node * d = new Node(50);
    Node * e = new Node(60);
    Node * f = new Node(70);
    Node * g = new Node(80);
    Node * h = new Node(90);
    Node * i = new Node(100);
    // connection

    root->left=a;
    root->right =b;
    a->left= c;
    a->right = h;
    b->right = d;
    d->left = f;
    d->right= g;
    c->right= e;
    h->right = i;
    level_oder(root);

    return 0;
}