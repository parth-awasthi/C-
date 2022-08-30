#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
Node *takeInput()
{
    int data;
    cout << "Enter data: " << endl;
    cin >> data;
    Node *head = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cin >> data;
    }
    return head;
}
void printNode(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
Node *insertNode(Node *head, int idx, int data)
{
    Node *newNode = new Node(data);
    Node *temp = head;
    int count = 0;
    if (idx == 0)
    {
        newNode->next = head;
        head = newNode;
        return head;
    }
    while (temp != NULL && count < idx - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp != NULL)
    {
        Node *temp2 = temp->next;
        temp->next = newNode;
        newNode->next = temp2;
    }

    return head;
}
Node *deleteNode(Node *head, int idx)
{
    Node *temp = head;
    int count = 0;
    if (idx == 0)
    {
        Node *tempHead = head->next;
        delete head;
        Node *head = tempHead;
        return head;
    }
    while (temp != NULL && count < idx - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp != NULL)
    {
        Node *a = temp->next;
        Node *b = a->next;
        temp->next = b;
    }
    return head;
}
int main()
{
    Node *head = takeInput();
    int choice;
    cout << "Enter 1 for inserting element in the Linked List: " << endl;
    cout << "Enter 2 for deleting element in the Linked List : " << endl;
    cin>> choice;
    switch (choice)
    {
    case 1:
        int data, idx;
        cout << "Enter data and index :" << endl;
        cin >> data >> idx;
        head = insertNode(head, idx, data);
        printNode(head);
        break;
    case 2:
        int idx1;
        cout << "Enter index to delete an element :" << endl;
        cin>> idx1;
        head = deleteNode(head, idx1);
        printNode(head);
        break;
    default:
    cout<<"You have entered invalid option: "<<endl;
    }
}