#include <bits/stdc++.h>
using namespace std;

class node
{

public:
    int data;
    node *next;
};

void printlist(node *n)
{
    while (n != NULL)
    {
        cout << n->data << endl;
        n = n->next;
    }
}

void deletenode(node *head, int data)
{
    node *temp, *prev;
    temp = head;
    prev = NULL;

    if (temp == NULL)
    {
        cout << "empty list" << endl;
    }
    while (temp != NULL && temp->data != data)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
    {
        cout << "key is not present" << endl;
    }
    prev->next = temp->next;
}
// deletenode(head, 6);

int main()
{
    node *head = new node();
    node *second = new node();
    node *third = new node();

    head->data = 5;
    head->next = second;
    second->data = 6;
    second->next = third;
    third->data=9;
    // third->data=11;,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
    third->next = NULL;
     deletenode(head,6);


    printlist(head);
    // deletenode(head, 6);

    return 0;
}