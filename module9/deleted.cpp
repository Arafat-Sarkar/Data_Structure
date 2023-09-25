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

int size( Node *head)
{
  Node * tmp = head;
  int cout=0;
  while (tmp!=NULL)
  {
    cout++;
    tmp= tmp->next;
  }
  return cout;
}

void deleted_position(Node *head , int pos )
{
  Node *tmp = head;
  for ( int i=0 ; i<pos-1; i++)
  {
    tmp=tmp->next;
  }
  Node * deletenode  = tmp->next;
  tmp->next= tmp->next->next;
  tmp->next->prev= tmp;
  delete deletenode;
}
void deleted_tail( Node *&tail)
{
    Node *deletnode = tail;
    tail = tail->prev;
    delete deletnode;
    tail->next = NULL;
}
void deleted_head( Node *&head)
{
    Node *deletnode = head;
    head = head->next;
    delete deletnode;
    head->prev = NULL;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
      Node * tail = c;
    head->next =a;
    a->prev = head;
    a->next =b;
    b->prev =a;
    b->next=c;
    c->prev =b;

    int pos, val;
    // cin>> pos>>val;
    // deleted_position(head,pos);
    // deleted_tail( tail);
    deleted_head(head);
    print_normal(head);
    print_reverse(tail);

    return 0;
}