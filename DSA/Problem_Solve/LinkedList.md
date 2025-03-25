# Insertion & Deletion in Linked List
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

# Linked List Problems
## 1. Print Size of Linked List
![Linked List Size](/DSA/Question_Image/Linked%20List/print_linked_list_size.png)

```c++ {32-41,50}
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

int getSize(Node *head)
{
    int cnt = 0;
    while (head)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}

int main()
{
    Node *head = new Node(10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);
    insertAtEnd(head, 50);
    cout << "Size of the linked list: " << getSize(head) << endl;
    return 0;
}

```

## 2. Print Middle Node
![Middle Node SLL](/DSA//Question_Image//Linked%20List/print_middle_node_SLL.png)

```c++ {33-50,69}

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

int getMidValue(Node *head)
{
    if (!head)
    {
        cout << "List is Empty!\n";
        return -1;
    }
    Node *slow, *fast;
    slow = fast = head;

    while (fast->next && fast->next->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow->data;
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

int main()
{
    Node *head = new Node(10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);
    insertAtEnd(head, 50);
    cout << "Middle value of the linked list: " << getMidValue(head) << endl;

    delList(head);

    return 0;
}

```

## 3. Print Nmbr of Occurences
![Count Occurences](/DSA/Question_Image/Linked%20List/print_Occurences_SLL.png)

```c++ {32-42,62-63}
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

int findOccurences(Node *head, int val)
{
    int cnt = 0;
    while (head)
    {
        if (head->data == val)
            cnt++;
        head = head->next;
    }
    return cnt;
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

int main()
{
    Node *head = new Node(10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 10);
    insertAtEnd(head, 10);
    insertAtEnd(head, 50);

    int k = 10;
    cout << "Number of Occurences of " << k << ": " << findOccurences(head, k) << endl;

    delList(head);

    return 0;
}

```

## 4. Insert In Sorted Linked List
![Insert In Sorted List](/DSA/Question_Image/Linked%20List/insert_in_sorted_list_SLL.png)

```c++ {42-51,80-81}
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

void printList(Node *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void insertInSortedList(Node *&head, int data)
{

    Node *newNode = new Node(data);
    if (!head || head->data > data)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next && temp->next->data < data)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
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

int main()
{
    Node *head = nullptr;
    head = new Node(10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);
    insertAtEnd(head, 50);

    int key = 25;
    insertInSortedList(head, key);
    printList(head);

    delList(head);

    return 0;
}

```

## 5. Delete Even Numbers
![Delete Even Numbers](/DSA/Question_Image/Linked%20List/delete_even_numbers_SLL.png)

```c++ {42-75,96}
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

void printList(Node *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void del_even_numbers(Node *&head)
{
    if (!head)
    {
        cout << "List Is Empty!\n";
        return;
    }

    // Del all even from  start
    while (head->data % 2 == 0)
    {

        Node *hold = head;
        head = head->next;
        delete hold;

        if (!head)
            return;
    }

    // Del rest of even
    Node *temp = head;
    while (temp->next)
    {
        if (temp->next->data % 2 == 0)
        {
            Node *hold = temp->next;
            temp->next = temp->next->next;
            delete hold;
        }
        else
            temp = temp->next;
    }
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

int main()
{
    Node *head = new Node(5);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);
    insertAtEnd(head, 50);
    insertAtEnd(head, 55);

    del_even_numbers(head);
    printList(head);

    delList(head);

    return 0;
}
```
## 6. Reverse DLL
![Reverse DLL](/DSA/Question_Image/Linked%20List/reverse_DLL.png)

```c++ {44-60,78}
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
    newNode->prev = temp;
}
void printList(Node *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void reverse(Node *&head)
{
    if (!head || !head->next)
        return;

    Node *current = head;
    Node *next = nullptr;
    while (current)
    {
        next = current->next;
        swap(current->next, current->prev);
        if (!next)
            break;
        current = next;
    }
    head = current;
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
int main()
{
    Node *head = new Node(10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);
    insertAtEnd(head, 50);

    reverse(head);
    printList(head);

    delList(head);
    return 0;
}

```

## 7. Reverse SLL
![Reverse SLL](/DSA/Question_Image/Linked%20List/reverse_SLL.png)

```c++ {42-59,79}
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

void printList(Node *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void reverse(Node *&head)
{
    if (!head || !head->next)
        return;

    Node *prev = nullptr;
    Node *current = head;
    Node *next = nullptr;

    while (current)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
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

int main()
{
    Node *head = new Node(10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);
    insertAtEnd(head, 50);

    reverse(head);
    printList(head);

    delList(head);

    return 0;
}

```
## 8. Rotate SLL By K position
![Rotate SLL](/DSA/Question_Image/Linked%20List/rotate_by_k_place_SLL.png)

```c++ {42-76,97}
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

void printList(Node *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void rotate_by_Kth_pos(Node *&head, int k)
{
    if (!head || !head->next || k < 1)
        return;

    int size = 0;
    Node *temp = head;
    while (temp)
    {
        ++size;
        temp = temp->next;
    }

    //if K>= size, No Rotation
    if (k >= size)
        return;

    int cnt = 1;
    Node *last = head;
    while (last && cnt < k)
    {
        cnt++;
        last = last->next;
    }

    Node *newHead = last->next;
    Node *hold = last;
    while (last->next)
    {
        last = last->next;
    }
    last->next = head;
    hold->next = nullptr;
    head = newHead;
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

int main()
{
    Node *head = new Node(10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);
    insertAtEnd(head, 50);

    printList(head);
    rotate_by_Kth_pos(head, 3);
    printList(head);

    delList(head);

    return 0;
}

```

## 9. Check Palindrome
![Check Palindrome](/DSA/Question_Image/Linked%20List/check_palindrome_SLL.png)

```c++ {42-55,57-88,104}
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

void printList(Node *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node *reverse(Node *head)
{
    Node *prev = nullptr;
    Node *current = head;
    Node *next = nullptr;
    while (current)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

void checkPalindrome(Node *&head)
{
    if (!head || !head->next)
    {
        cout << "YES\n";
        return;
    }

    Node *slow = head, *fast = head;
    while (fast->next && fast->next->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    Node *secondHalf = reverse(slow->next);
    slow->next = nullptr;
    Node *firstHalf = head;
    Node *temp = secondHalf;
    while (firstHalf && secondHalf)
    {
        if (firstHalf->data != secondHalf->data)
        {
            cout << "NO\n";
            return;
        }
        firstHalf = firstHalf->next;
        secondHalf = secondHalf->next;
    }
    cout << "YES\n";

    slow->next = reverse(temp);
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

int main()
{
    Node *head = new Node(10);
    insertAtEnd(head, 20);
    checkPalindrome(head);
    delList(head);

    return 0;
}

```
## 10. Detect Circularity
![Detect Circularity](/DSA/Question_Image/Linked%20List/detect_circularity_SLL.png)

```c++ {50-65,80-81}
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

void insertAtEnd(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    if (!head)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = tail->next;
}

void printList(Node *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
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

void checkCircular(Node *head)
{
    Node *slow = head, *fast = head;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}


int main()
{
    Node *head = nullptr;
    Node *tail = nullptr;
    insertAtEnd(head, tail, 10);
    insertAtEnd(head, tail, 20);
    insertAtEnd(head, tail, 30);
    insertAtEnd(head, tail, 40);
    insertAtEnd(head, tail, 50);
    insertAtEnd(head, tail, 60);
    printList(head);

    tail->next = head; // Making it circular
    checkCircular(head);

    return 0;
}

```

## 11. Print Entry Node of Loop


```c++ {64-78,80-97,110,111}
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

void insertAtEnd(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    if (!head)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = tail->next;
}

void printList(Node *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
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

void make_circular(Node *head, Node *&tail, int pos)
{
    Node *temp = head;
    int count = 1;
    while (count < pos && temp)
    {
        temp = temp->next;
        count++;
    }
    if (!temp)
        return;
    tail->next = temp;
}

Node *checkCircular(Node *head)
{
    Node *slow = head, *fast = head;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return fast;
        }
    }
    return nullptr;
}

void printCycleEntryNode(Node *head)
{

    Node *fast = checkCircular(head);
    if (!fast)
    {
        cout << "No cycle\n";
        return;
    }

    Node *slow = head;
    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }
    cout << "Cycle entry node: " << slow->data << endl;
}

int main()
{
    Node *head = nullptr;
    Node *tail = nullptr;
    insertAtEnd(head, tail, 10);
    insertAtEnd(head, tail, 20);
    insertAtEnd(head, tail, 30);
    insertAtEnd(head, tail, 40);
    insertAtEnd(head, tail, 50);
    insertAtEnd(head, tail, 60);
    printList(head);
    make_circular(head, tail, 2);
    printCycleEntryNode(head);

    return 0;
}

```

## 12. Delete Loop

```c++{80-97,111}
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

void insertAtEnd(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    if (!head)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = tail->next;
}

void printList(Node *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
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

void make_circular(Node *head, Node *&tail, int pos)
{
    Node *temp = head;
    int count = 1;
    while (count < pos && temp)
    {
        temp = temp->next;
        count++;
    }
    if (!temp)
        return;
    tail->next = temp;
}

Node *checkCircular(Node *head)
{
    Node *slow = head, *fast = head;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return fast;
        }
    }
    return nullptr;
}

void removeCircularity(Node *head)
{

    Node *fast = checkCircular(head);
    if (!fast)
    {
        cout << "No cycle\n";
        return;
    }

    Node *slow = head;
    while (slow->next != fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    fast->next = nullptr;
}

int main()
{
    Node *head = nullptr;
    Node *tail = nullptr;
    insertAtEnd(head, tail, 10);
    insertAtEnd(head, tail, 20);
    insertAtEnd(head, tail, 30);
    insertAtEnd(head, tail, 40);
    insertAtEnd(head, tail, 50);
    insertAtEnd(head, tail, 60);
    printList(head);
    make_circular(head, tail, 2);
    removeCircularity(head);
    printList(head);
    return 0;
}

```