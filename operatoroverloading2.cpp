#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int width;

    Rectangle(int len, int wid)
    {
        length = len;
        width = wid;
    }

    void area()
    {
        cout << length * width << endl;
    }

    // Overloading ++ operator.
    Rectangle operator++(int)
    {

        length++;
        width++;
    }

    // Overloading -- operator.
    Rectangle operator--(int)
    {
        length--;
        width--;
    }

    Rectangle operator+(const int k)
    {
        length += k;
        width += k;

        Rectangle r(length, width);
        return r;
    }
};

int main()
{

    Rectangle r(3, 2);
    r.area();

    r++;

    cout << r.length << " " << r.width << " = ";
    r.area();

    // r--;

    r = r + 1;

    cout << r.length << " " << r.width << " = ";
    r.area();

    return 0;
}
