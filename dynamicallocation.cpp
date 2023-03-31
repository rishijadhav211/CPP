#include <bits/stdc++.h>
using namespace std;

struct LinkNode
{
    int val;
    LinkNode *next;

    LinkNode()
    {
        val = 0;
        next = NULL;
        cout << "constructor called";
    }
    LinkNode(int a)
    {
        val = a;
        next = NULL;
    }

    operator float()
    {
        return float(val);
    }
};

char *getval()
{
    char *a = new char[7];

        return c;
}
int main()
{
    LinkNode *head = new LinkNode(90);
    int *a = new int(88);
    // *a = 10;

    cout << *a << endl;
    cout << "Linked list node" << head->val << endl;
    head->next = new LinkNode;

    float val = LinkNode(2);

    cout << "\n"
         << val << endl;

    cout << a << endl;
    delete a;

    char *c = getval();
    cout << *c << endl;

    cout << "\n"
         << a;

    return 0;
}