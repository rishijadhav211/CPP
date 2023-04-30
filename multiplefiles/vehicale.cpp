#include <bits/stdc++.h>
using namespace std;
class vehicale
{
public:
    int id;
    int speed;

    vehicale(int _id, int _speed)
    {
        id = _id;
        speed = _speed;
    }

    void display()
    {
        cout << id << " " << speed;
    }
};