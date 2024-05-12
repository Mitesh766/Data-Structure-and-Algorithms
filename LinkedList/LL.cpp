#include <iostream>
#include <vector>

using namespace std;

class Node
{

public:
    int data;
    Node *next;

    // constructor
    //  if two parameteres are passed this will be considered
public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

    // if only one paramter is passed this will be considered
public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

// Function of dtype Node*
Node *convertingArrToLL(vector<int> arr)
{
    if (arr.size() == 0)
        return nullptr;
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void traversingALL(Node *head)
{
    Node *mover = head;
    while (mover)
    {
        cout << mover->data << " ";
        mover = mover->next;
    }
}

int LengthOfLL(Node *head)
{
    Node *mover = head;
    int cnt = 0;
    while (mover)
    {
        cnt++;
        mover = mover->next;
    }
    return cnt;
}

bool SearchInALL(Node *head, int target)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        if (temp->data == target)
        {
            return 1;
        }
        temp = temp->next;
    }

    return 0;
}

// will delete the existing head and return the new head
Node *deleteHead(Node *head)
{
    if (head == NULL)
        return head;
    Node *temp = head;
    head = head->next;
    free(temp);
    return head;
}

Node *deleteTail(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return nullptr;
    }
    Node *temp = head;
    while (temp->next->next)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;

    return head;
}

// TC is O(K);
Node *deleteKthNode(Node *head, int k)
{
    if (head == NULL)
        return head;
    Node *temp = head;
    if (k == 1)
    {
        head = head->next;
        delete temp;
        return head;
    }
    int cnt = 1;
    Node *previous = NULL;
    while (temp != nullptr)
    {

        if (cnt == k)
        {
            previous->next = temp->next;
            delete temp;
            return head;
        }
        previous = temp;
        cnt++;
        temp = temp->next;
    }

    return head;
}

Node *deleteGivenValueNode(Node *head, int value)
{
    if (head == nullptr)
        return nullptr;
    Node *temp = head;
    if (head->data == value)
    {

        head = head->next;
        delete temp;

        return head;
    }

    Node *prev = nullptr;
    while (temp != nullptr)
    {
        if (temp->data == value)
        {
            prev->next = temp->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

// Insertion in Linked List
Node *insertAtHead(Node *head, int element)
{
    Node *newValue = new Node(element, head);
    return newValue;
}

Node *insertAtTail(Node *head, int el)
{
    Node *newNode = new Node(el);
    if (head == nullptr)
        return newNode;
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;

    return head;
}

Node *insertAtKth(Node *head, int k, int value)
{
    Node *newNode = new Node(value);
    // if(head==nullptr ) {
    //     if(k==1) return newNode;
    //     else return nullptr;}

    if (k == 1)
    {
        return new Node(value, head);
    }
    int cnt = 1;
    Node *temp = head;

    while (temp != nullptr)
    {
        if (cnt == k - 1)
        {
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        cnt++;
        temp = temp->next;
    }

    return head;
}

Node *insertBeforeGivenValue(Node *head, int value, int element)
{
    if (head == nullptr)
        return nullptr;
    if (head->data == value)
    {
        return new Node(element, head);
    }
    Node *temp = head;
    while (temp!=nullptr)
    {
        if (temp->next->data == value)
        {
            Node *newNode = new Node(element);
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4};
    // Node* head= new Node(arr[0],nullptr);
    Node *head = convertingArrToLL(arr);
    // head = deleteKthNode(head, 2);
    // head = deleteGivenValueNode(head, 20);
    // head=deleteHead(head);
    // head=deleteTail(head);

    // head=insertAtHead(head,5);
    // head=new Node(6,head);
    // head=insertAtTail(head,200);
    head=insertAtKth(head,6,300);

    // head = insertAtKth(head, 6, 500);
    // head = insertBeforeGivenValue(head, 5, 5);
    traversingALL(head);

    // cout << LengthOfLL(head);
    // cout << SearchInALL(head, 2);
    return 0;
}
