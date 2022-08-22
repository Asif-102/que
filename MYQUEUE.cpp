#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        next = NULL;
    }
};

class Queue
{
    Node *front;
    Node *rear;

public:
    Queue()
    {
        front = NULL;
        rear = NULL;
    }

    // enqueue --> push (val)

    void push(int val)
    {
        Node *nw = new Node(val);

        if (front == NULL)
        {
            front = nw;
            rear = nw;
            return;
        }

        rear->next = nw;
        rear = rear->next;
    }

    // deque --> pop ()

    int pop()
    {
        int chk = -1;
        if (rear == NULL)
        {
            cout << "Queue Underflow | There is no element in the Queue" << endl;
            return chk;
        }
        Node *delNode = front;
        front = front->next;
        if(front == NULL)
            rear = NULL;
        
        chk = delNode->val;
        delete delNode;
        return chk;
    }

    // peek --> front() back()

    int front()
    {
        int chk = front->val;
        return chk;
    }

    // empty --> empty()
};

int main(void)
{
}