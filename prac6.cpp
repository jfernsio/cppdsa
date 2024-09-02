// Write a program to create a single linked list and display the node elements in
// reverse order

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

struct _linkedList
{
    Node *head;
    _linkedList()
    {
        head = NULL;
    }
    void reverse()
    {
        Node *current = head;
        Node *prev = NULL,
             *next = NULL;
        while (current != NULL)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }
    void print()
    {
        struct Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
    void push(int data) 
    {
        Node *temp = new Node(data);
        temp->next = head;
        head = temp;
    }
};

int main()
{
    _linkedList l1;
    l1.push(20);
    l1.push(4);
    l1.push(15);
    l1.push(85);

    cout << "Given Linked List  : " << endl;
    l1.print();
    l1.reverse();
    cout << "Reverse Linked List : " << endl;
    l1.print();

    return 0 ;
}
