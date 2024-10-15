#include <iostream>
#include <string.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int val);
};
void InsertAtHead(Node *&head, int val);

void InsertAtTail(Node *&head, int val);

bool Search(Node *&head, int key);

void display(Node *head);
