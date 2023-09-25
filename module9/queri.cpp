#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
 
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
 
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
 
void printReverse(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}
 
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        print(head);
        printReverse(tail);
        return;
    }
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
    print(head);
    printReverse(tail);
}
 
void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        cout<<"L->";
        print(head);
        cout<<"R->";
        printReverse(tail);
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
     cout<<"L->";
    print(head);
     cout<<"R->";
    printReverse(tail);
}
 
void insert_any(Node *head, Node *tail, int index, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i < index; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << "Invalid" << endl;
            return;
        }
    }
    newNode->next = temp->next;
    newNode->prev = temp;
    if (temp->next != NULL)
    {
        temp->next->prev = newNode;
    }
    temp->next = newNode;
    cout<<"L->";
    print(head);
    cout<<"R->";
    printReverse(tail);
}
 
int count(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
 
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int index, val;
        cin >> index >> val;
        if (index == 0)
        {
            insert_head(head, tail, val);
        }
        else if (index == count(head))
        {
            insert_tail(head, tail, val);
        }
        else if (index >= count(head))
        {
            cout << "Invalid" << endl;
        }
        else
        {
            insert_any(head, tail, index, val);
        }
    }
    return 0;
}