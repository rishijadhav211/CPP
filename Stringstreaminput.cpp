#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s, s1;
    s = "hello this is RJ";
    stringstream ss(s);

    while (getline(ss, s1, ' '))
    {
        cout << s1 << endl;
    }
    return 0;
}