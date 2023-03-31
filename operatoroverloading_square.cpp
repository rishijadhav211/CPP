#include <bits/stdc++.h>
using namespace std;

static int i = 0;

class Square
{
private:
    int d = 99;

public:
    static int j;
    int side;

    Square(int _side)
    {
        side = _side;
        cout << d << "--" << j << endl;
    }

    int area()
    {
        return side * side;
    }

    bool operator>(Square &s)
    {
        if (area() > s.area())
            return true;
        return false;
    }

    bool operator<(Square &s)
    {
        if (area() < s.area())
            return true;
        return false;
    }
    void lowest(int a, int b, int c)
    {
        cout << "called lowest";
    }
};

int Square::j = 0;
int main()
{

    Square s1(4);
    Square s2(3);

    if (s1 > s2)
    {
        cout << "S1 is larger than S2\n";
    }
    else if (s1 < s2)
    {
        cout << "S1 is smaller than S2\n";
    }
    else
    {
        cout << "S1 is equal to S2\n";
    }

    s2.side = 4;

    if (s1 > s2)
    {
        cout << "S1 is larger than S2\n";
    }
    else if (s1 < s2)
    {
        cout << "S1 is smaller than S2\n";
    }
    else
    {
        cout << "S1 is equal to S2\n";
    }

    s1.lowest(4, 4, 4);
    return 0;
}
