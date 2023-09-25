#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
  int val;
  Node *next;
  Node(int val)
  {
    this->val = val;
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
bool same_to_same(Node *head, Node *head_1) 
{
    while (head != NULL && head_1 != NULL) 
    {
        if (head->val != head_1->val) 
        {
            return false;
        }
        head = head->next;
        head_1 = head_1->next;
    }
   
    if (head == NULL && head_1 == NULL) 
    {
        return true;
    }

    else
    {
         return false;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    Node *head_1 = NULL;
    Node *tail_1 = NULL;

    int val;
    int val_1;
    while (true)
    {
        cin>>val;
        if (val == -1)
        {
            break;
        }
        
      insert_tail(head,tail, val);
       
    }
    while (true)
    {
        cin>>val_1;
        if (val_1 == -1)
        {
            break;
        }
        
        insert_tail(head_1,tail_1,val_1);
    }

    if (same_to_same(head, head_1)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
   
  return 0;
}