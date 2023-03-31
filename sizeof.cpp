#include <bits/stdc++.h>
using namespace std;

class temp
{
public:
        int a;
        int b;
        int c;
        int d;
        temp()
        {
                cout << a << " " << b << " " << c << endl;
        }
        const void hello()
        {
                int ha = 0;
                int hb;
                int dd;
                a = 10;

                cout << a << " ***** " << hb << endl;
        }
};

int main()
{
        cout << "do nothing\n";
        int a;
        temp t;
        t.hello();
        cout << sizeof(temp) << endl; // size is defined but memory is not allocated;

        return 0;
}