#include <bits/stdc++.h>
using namespace std;

class Square
{

public:
    int length;
    int x = 100;

    Square(int length = 0)
    {
        this->length = length;
    }

    int Area()
    {
        return length * length;
    }
    Square operator+(Square &s)
    {
        Square ss;
        ss.length = this->length + s.length;

        return ss;
    }

    void operator++(int)
    {
        this->length++;
        this->x++;
    }
};

class rectangle
{
    int length;
    int width;

public:
    rectangle(int length = 0, int width = 0)
    {
        this->length = length;
        this->width = width;
    }

    int Area()
    {
        return length * width;
    }

    friend void increament_length(rectangle &);
    friend void increament_width(rectangle &);
};

void increament_width(rectangle &r)
{
    r.width++;
}

void increament_length(rectangle &r)
{
    r.length++;
}
int main()
{

    Square s1(10);
    Square s2(40);

    Square s3 = s1 + s2;

    cout << s3.Area() << endl;
    cout << "s1 length" << s1.length << endl;
    cout << "s1 x" << s1.x << endl;
    s1++;
    cout << "s1 length" << s1.length << endl;
    cout << "s1 x" << s1.x << endl;
    rectangle rec1(20, 10);

    cout << "rectangle area :" << rec1.Area() << endl;

    increament_length(rec1);
    increament_width(rec1);

    cout << "After increament by 1 rectangle area :" << rec1.Area() << endl;

    return 0;
}