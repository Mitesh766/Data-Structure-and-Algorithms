#include <iostream>
#include <vector>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *back;

public:
    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node *convertingArrToDLL(vector<int> arr)
{

    if (arr.size() == 0)
        return nullptr;
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

void traversingADLL(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

Node *deleteHead(Node *head)
{
    if (head == nullptr)
        return head;
    if (head->next == nullptr)
    {
        delete head;
        return nullptr;
    }
    Node *temp = head;
    head = head->next;
    head->back = nullptr;
    temp->next = nullptr;
    delete temp;
    return head;
}

Node *deleteTail(Node *head)
{
    if (head == nullptr)
        return nullptr;
    if (head->next == nullptr)
    {
        delete head;
        return nullptr;
    }

    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->back->next = nullptr;
    temp->back = nullptr;

    delete temp;
    return head;
}

Node *deleteKthNode(Node *head, int k)
{
    if (head == nullptr)
        return nullptr;
    if (k == 1)
    {
        Node *temp = head;
        head = head->next;

        // if only single element is there it will simply return null pointer
        if (head != nullptr)
            head->back = nullptr;
        delete temp;
        return head;
    }
    int cnt = 1;
    Node *temp = head;
    while (temp != nullptr)
    {
        if (cnt == k)
        {
            if (temp->next != nullptr)
            {

                temp->back->next = temp->next;
                temp->next->back = temp->back;
            }
            else
            {
                temp->back->next = nullptr;
            }
            delete temp;
            break;
        }
        temp = temp->next;
        cnt++;
    }
    return head;
}

Node *deleteKthNode3(Node *head, int k)
{
    if (head == nullptr)
    {
        return nullptr;
    }
    Node *temp = head;
    if (k == 1)
    {
        head = head->next;
        if (head != nullptr)
        {
            head->back = nullptr;
        }
        delete temp;
        return head;
    }
    int cnt = 1;
    while (temp != nullptr)
    {
        if (cnt == k)
        {
            if (temp->next != nullptr)
            {
                temp->next->back = temp->back;
            }
            temp->back->next = temp->next;
            delete temp;
            break;
        }
        temp = temp->next;
        cnt += 1;
    }
    return head;
}

Node *deleteKthNode2(Node *head, int k)
{
    if (head == nullptr)
        return nullptr;
    int cnt = 1;
    Node *temp = head;
    while (temp != nullptr)
    {
        if (cnt == k)
            break;
        temp = temp->next;
        cnt++;
    }
    Node *prev = temp->back;
    Node *front = temp->next;
    if (prev == nullptr && front == nullptr)
    {
        delete temp;
        return nullptr;
    }
    else if (prev == nullptr)
    {
        return deleteHead(head);
    }
    else if (front == nullptr)
    {
        return deleteTail(head);
    }
    else
    {
        prev->next = front;
        front->back = prev;
        temp->next = nullptr;
        temp->back = nullptr;
    }
    return head;
}

Node *deleteNodeWithGivenValue(Node *head, int value)
{
    if (head == nullptr)
        return nullptr;
    Node *temp = head;
    if (head->data == value)
    {
        head = head->next;
        if (head != nullptr)
        {
            head->back = nullptr;
        }
        delete temp;
        return head;
    }
    while (temp != nullptr)
    {
        if (temp->data == value)
        {
            temp->back->next = temp->next;
            if (temp->next != nullptr)
            {
                temp->next->back = temp->back;
            }
            delete temp;
            break;
        }
        temp = temp->next;
    }
    return head;
}

// it is before head
Node *insertAtHead(Node *head, int el)
{
    Node *newHead = new Node(el, head, nullptr);

    if (head != nullptr)
        head->back = newHead;
    return newHead;
}

// There will always be atleast one element
Node *insertBeforeTail(Node *head, int el)
{

    if (head->next == nullptr)
    {

        return insertAtHead(head, el);
    }
    Node *tail = head;
    while (tail->next != nullptr)
    {
        tail = tail->next;
    }

    Node *prev = tail->back;

    Node *newNode = new Node(el, tail, prev);
    prev->next = newNode;
    tail->back = newNode;
    return head;
}   

Node* insertAtKthNode

int main()
{
    vector<int> arr = {};
    Node *head = convertingArrToDLL(arr);
    //   head=deleteHead(head);
    // head = deleteTail(head);
    // head = deleteNodeWithGivenValue(head, 2);

    // head = insertAtHead(head, 6);
    head = insertBeforeTail(head, 5);
    traversingADLL(head);
    // cout << head->data;
    return 0;
}