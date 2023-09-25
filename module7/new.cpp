#include<bits/stdc++.h>
using namespace std;

class Node {
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
    } 
    else 
    {
        tail->next = newnode;
        tail = newnode;
    }
}

void insert_head(Node *&head,Node *&tail, int val) 
{
    Node* newnode = new Node(val);
    if (head == NULL) 
    {
        head = newnode;
        tail = newnode;
    } 
    else 
    {
        newnode->next = head;
        head = newnode;
    }
}

void head_tail(Node* head, Node* tail) 
{
    if (head == NULL) 
    {
        cout << "List is empty." << endl;
    } else {
        cout << head->val << " " << tail->val << endl;
    }
}

void print_link_list(Node *head) 
{
    Node *tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--) {
        int x, v;
        cin >> x >> v;
        if (x == 0) 
        {
            insert_head(head,tail, v);
        } 
        else if (x == 1) 
        {
            insert_tail(head, tail, v);
        }
        head_tail(head, tail);
    }
    return 0;
}
