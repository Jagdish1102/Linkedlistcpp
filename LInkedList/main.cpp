#include "LinkedList.cpp"
int main()
{
    Node *head = NULL;
    InsertAtTail(head, 1);
    InsertAtTail(head, 2);
    InsertAtTail(head, 3);
    InsertAtTail(head, 4);
    InsertAtTail(head, 5);
    display(head);
    InsertAtHead(head, 0);
    display(head);
    cout << Search(head, 9) << endl;

    return 0;
}