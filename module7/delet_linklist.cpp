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
void delet_node(Node* head , int pos)
{
    Node * tmp = head;
    for( int i =1; i< pos-1; i++)
    {
        tmp = tmp->next;
    }
    Node * delet_node = tmp ->next;
    tmp->next = tmp->next->next;
    delete delet_node;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b  = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    head->next=a;
    a->next= b;
    b ->next =c;
    c ->next = d;
    print_link_list( head);
    int pos;
    cin>>pos;
    delet_node( head , pos );
    print_link_list(head);
   
    return 0;
}