#include<bits/stdc++.h>
using namespace std;
class Node 
{
      public :
      int val;
      Node* next;
      Node * prev;
      Node( int val)
      {
        this->val=val;
        this->next = NULL;
        this->prev= NULL;
      }
};
void print_normal( Node *head)
{
    Node *tmp = head;
    while(tmp != NULL)
    {
      cout<<tmp->val<<" ";
      tmp = tmp->next;  
    }
    cout<<endl;
}
void print_reverse(Node *tail)
{
    Node *tmp = tail;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp= tmp->prev;
    }
   cout<<endl;
}
void insert_tail(Node *&tail,Node *&head, int val)
{
  Node * newnode = new Node (val);
  if ( tail == NULL)
  {
     head = newnode;
     tail= newnode;
     return;
  }
  tail->next = newnode;
  newnode->prev= tail;
  tail = tail->next;

}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val == -1)
         break;
        insert_tail(head, tail, val);
    }
    
    print_normal(head);
    print_reverse(tail);
    return 0;
}