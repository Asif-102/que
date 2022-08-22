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

    //enqueue --> push (val)

    void push(int val)
    {
        Node *nw = new Node(val);

        if(front == NULL)
        {
            front = nw;
            rear = nw;
            return;
        }

        rear->next = nw;
        rear = rear->next;
    }

    //deque --> pop ()

    //peek --> front() back()

    //empty --> empty()
};

int main(void)
{
}