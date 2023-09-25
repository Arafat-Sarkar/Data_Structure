#include<bits/stdc++.h>
using namespace std;
class Node 
{
      public :
      int val;
      Node* next;
      Node( int val)
      {
        this->val=val;
        this->next = NULL;
      }
};
void print_link_list( Node *head)
{
    Node * tmp= head;
    while (tmp != NULL)
    {
        cout<<tmp->val <<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
int  size ( Node * head)
{
    Node * tmp = head;
    int count = 0;
   while (tmp != NULL )
   {
     count ++;
     tmp = tmp->next;
   }
   return count;
}
void insert(Node * head, int pos , int val)
{
    Node * newnode = new Node(val);
    Node * tmp = head;
    for (int  i = 1; i <pos-1; i++)
    {
         tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
}
void insert_head( Node *&head ,  int val)
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head= newnode;
}
void insert_tail( Node * &head , Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if( head==NULL)
    {
        head= newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
     Node *b  = new Node(30);
    Node *c = new Node(40);
     Node *d = new Node(50);
     Node * tail = d;
    head->next=a;
    a->next= b;
    b ->next =c;
    c ->next = d;
   
    
    print_link_list(head);
    cout<<"tail ->"<<tail->val<<endl;
    int pos ,val;
    cin>> pos>> val;
    if ( pos > size ( head))
    {
        cout <<"Invalid Index"<<endl;
    
    }
    else if( pos==0)
    {
        insert_head( head , val);
    }
    
    else if ( pos == size(head))
    {
        insert_tail(head, tail,val);
    }
    else 
    {
       insert ( head, val, pos);
    }

     print_link_list(head);
     cout<<"tail-> "<<tail->val<<endl;
    return 0;
}