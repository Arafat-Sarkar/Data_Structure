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
void insert_tail(Node *&head, Node *&tail, int val)
{
  Node *newnode = new Node(val);
  if (head == NULL)
  {
    head = newnode;
    tail = newnode;
    return;
  }
  tail->next = newnode;
  tail = newnode;
}
void print_link_list(Node *head)
{
  Node *tmp = head;
  while (tmp != NULL)
  {
    cout << tmp->val << " ";
    tmp = tmp->next;
  }
  cout << endl;
}
int get_size(Node *head)
    {
        Node *temp = head;
        int count = 0;
        while(temp != NULL)
        {
             count++;
            temp = temp->next;
        }
        return count;
    }
void get_mid(Node *head)
   {
    int size = get_size(head);
    int mid =(size+1)/2;
    Node *temp= head;
    for (int i=0; i<mid-1; i++)
    {
        temp=temp->next;
    }
    if(size % 2== 0)
    {
        cout<<temp->val<<" "<<temp->next->val<<endl;
    }
    else{
        cout<<temp->val<<endl;
    }
}

int main()
{
       Node *head = NULL;
  Node *tail = NULL;
  int val;
  while (true)
  {
    cin >> val;
    if (val == -1)
    {
        break; 
    }
      insert_tail(head, tail, val);
  }
   for (Node* i = head; i->next!=NULL; i=i->next)
    {
        for (Node* j =i->next; j !=NULL; j=j->next)
        {
            if(i->val<j->val)
            {
                swap(i->val,j->val);
            }
        }
        
    }
    get_mid(head);
    
    return 0;
}