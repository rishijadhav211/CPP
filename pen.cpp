
#include <bits/stdc++.h>
using namespace std;

class Refill
{

    string color;

public:
    Refill(string color)
    {
        this->color = color;
    }
};

class body
{
    float length;
    string color;

public:
    body(float length, string color)
    {
        this->length = length;
        this->color = color;
    }
};

class Cap
{

    float size;

public:
    Cap(float size)
    {
        this->size = size;
    }
};

class pen
{
    float cost;
    Refill r1;
    body b;
    Cap c;

    void createpen()
    {
    }
};
int main()
{

    return 0;
}