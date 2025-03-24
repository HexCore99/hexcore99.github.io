## Linked List Funcitons
::: code-group
```c++ {20-31,33-51,53-91,93-102,104-123,125-169,171-179,181-189} [DLL]
#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->prev = nullptr;
        this->next = nullptr;
    }
};

void insertAtBegining(Node *&head, int data)
{
    Node *newNode = new Node(data);
    if (head == nullptr)
    {
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(Node *&head, int data)
{
    Node *newNode = new Node(data);

    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}

void insertAtPos(Node *&head, int data, int pos)
{
    if (pos < 1)
    {
        cout << "invalid index\n";
        return;
    }
    if (pos == 1)
    {
        insertAtBegining(head, data);
        return;
    }

    Node *temp = head;
    int current = 1;

    while (current < pos - 1 && temp)
    {
        current++;
        temp = temp->next;
    }
    if (temp == nullptr)
    {
        cout << "Invalid Index\n";
        return;
    }

    if (!temp->next)
    {
        insertAtEnd(head, data);
        return;
    }

    Node *newNode = new Node(data);
    newNode->prev = temp;
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
}

void delFirst(Node *&head)
{
    if (!head)
        return;
    Node *temp = head;
    head = head->next;
    if (head)
        head->prev = nullptr;
    delete temp;
}

void delLast(Node *&head)
{
    if (!head)
        return;

    if (!head->next)
    {
        delete head;
        head = nullptr;
        return;
    }

    Node *temp = head;
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->prev->next = nullptr;
    delete temp;
}

void deleteAtPos(Node *&head, int pos)
{
    if (!head)
    {
        cout << "List is Empty!\n";
        return;
    }

    if (pos < 1)
    {
        cout << "Invalid Index!\n";
        return;
    }

    if (pos == 1)
    {
        delFirst(head);
        return;
    }

    Node *temp = head;
    int current = 1;

    while (current < pos && temp)
    {
        temp = temp->next;
        current++;
    }
    if (!temp)
    {
        cout << "Invalid Index!\n";
        return;
    }

    if (!temp->next)
    {
        delLast(head);
        return;
    }

    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;

    delete temp;
}

void delList(Node *&head)
{
    while (head)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
}

void printList(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << '\n';
}

int main()
{
    Node *head = new Node(30);
    insertAtBegining(head, 20);
    insertAtBegining(head, 10);

    insertAtEnd(head, 40);
    insertAtEnd(head, 50);

    insertAtPos(head, 5, 1);
    insertAtPos(head, 15, 3);

    // delFirst(head);
    // delLast(head);
    printList(head);
    deleteAtPos(head, 2);
    printList(head);

    delList(head);

    return 0;
}


```

```c++ {18-24,26-40,42-70,72-87,89-106,108-140,142-150,152-161} [SLL]

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

void insertAtBegining(Node *&head, int data)
{

    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(Node *&head, int data)
{
    Node *newNode = new Node(data);
    if (!head)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtPos(Node *&head, int data, int pos)
{
    if (pos < 1)
    {
        cout << "Invalid Index!";
        return;
    }
    if (pos == 1)
    {
        insertAtBegining(head, data);
        return;
    }

    int cnt = 1;
    Node *temp = head;
    while (cnt < pos - 1 && temp != nullptr)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp == nullptr)
    {
        cout << "Invalid Index! " << endl;
        return;
    }
    Node *newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
}

void delFirst(Node *&head)
{
    if (!head)
        return;

    if (!head->next)
    {
        delete head;
        head = nullptr;
        return;
    }

    Node *temp = head;
    head = head->next;
    delete temp;
}

void delLast(Node *&head)
{
    if (!head)
        return;
    if (!head->next)
    {
        delete head;
        head = nullptr;
        return;
    }
    Node *temp = head;
    while (temp->next->next)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
}

void delAtpos(Node *&head, int pos)
{
    if (!head)
        return;
    if (pos < 1)
    {
        cout << "Invalid Index\n";
        return;
    }
    if (pos == 1)
    {
        delFirst(head);
        return;
    }

    Node *temp = head;
    int current = 1;
    while (current < pos - 1 && temp->next)
    {
        temp = temp->next;
        current++;
    }
    if (!temp->next)
    {
        cout << "Invalid Index\n";
        return;
    }

    Node *hold = temp->next;
    temp->next = temp->next->next;
    delete hold;
    hold = nullptr;
}

void delList(Node *&head)
{
    while (head)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
}

void printList(Node *head)
{

    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << '\n';
}

int main()
{
    Node *head = new Node(30);
    insertAtBegining(head, 20);
    insertAtBegining(head, 10);
    insertAtEnd(head, 50);
    insertAtEnd(head, 60);

    insertAtPos(head, 5, 1);
    insertAtPos(head, 70, 7);
    insertAtPos(head, 90, 8);

    printList(head);
    delAtpos(head, 9);
    printList(head);

    delList(head);

    return 0;
}


```





:::