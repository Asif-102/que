#include <bits/stdc++.h>
#include "MYQUEUE.h"

using namespace std;

typedef pair<int, int> mytype;

int main(void)
{
    // Queue<int> q;

    // int n;
    // cin >> n;

    // for (int i = 0; i < n; i++)
    // {
    //     int chk;
    //     cin >> chk;
    //     q.push(chk);
    // }

    // while (!q.empty())
    //     cout << q.pop() << " ";

    // if (!q.empty())
    //     cout << q.Front() << endl;
    // if (!q.empty())
    //     cout << q.Back() << endl;

    Queue<mytype> q;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int c1, c2;
        cin >> c1 >> c2;
        q.push(make_pair(c1, c2));
    }

    while (!q.empty())
    {
        mytype chk;
        chk = q.pop();
        cout << chk.first << " | " << chk.second << endl;
    }

    if (!q.empty())
    {
        mytype chk;
        chk = q.Front();
        cout << chk.first << " | " << chk.second << endl;
    }
    if (!q.empty())
    {
        mytype chk;
        chk = q.Back();
        cout << chk.first << " | " << chk.second << endl;
    }
}