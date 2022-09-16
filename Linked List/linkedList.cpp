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
    cout << "Enter data : ";
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
        head = tempHead;
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
int searchNode(Node *head, int x)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == x)
        {
            return temp->data;
        }
        temp = temp->next;
    }
    return -1;
}

int main()
{
    Node *head = takeInput();
    int choice;
    cout << "Enter 1 for insert element in linked list : " << endl;
    cout << "Enter 2 for delete element in linked list : " << endl;
    cout << "Enter 3 for search element in linked list : " << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        int data, idx;
        cout << "Enter data and idx : ";
        cin >> data >> idx;
        head = insertNode(head, idx, data);
        printNode(head);
        break;
    case 2:
        int idx1;
        cout << "Enter idx to delete element : ";
        cin >> idx1;
        head = deleteNode(head, idx1);
        printNode(head);
        break;
    case 3:
        int x;
        cout << "Enter value to find in Linked List : ";
        cin >> x;
        cout << searchNode(head, x);
        break;
    default:
        cout << "You have entered invalid option !";
    }
}
