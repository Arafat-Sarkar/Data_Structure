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
int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    int val;
    while (true)
    {
        cin>> val;
        if(val == -1) 
        break;
        insert_tail(head, tail,val );
    }
    print_link_list(head);
    return 0;
}