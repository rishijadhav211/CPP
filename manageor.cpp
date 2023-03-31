#include <bits/stdc++.h>

using namespace std;
vector<pair<string,int>> pizza_base{{"Regular", 50}, {"Wholewheat", 75}};
vector<pair<string,int>> pizza_sause{{"Marinara sauce", 0}, {"Pesto sauce", 0}};
vector<pair<string,int>> pizza_toppings{{"Mozzarella cheese",30},{"Cheddar cheese",35},{"Spinach",20},{"Corn",15},{"Mushroom",15},{"Chicken",50},{"Pepperoni",45}};


vector<pair<string,int>> drinks{{"Pepsi",17},{"7-up",19},{"Coke",20}};
vector<pair<string,int>> dessert{{"Lava cake",95},{"Chocolate brownie",86}};


class order{
    int total_bil;

    public:
    int price (string a)
    {
        for (int i =0 ;i< pizza_base.size();i++)
        {
            if (a==pizza_base[i].first)
            return pizza_base[i].second;
        }
        for (int i =0 ;i< pizza_sause.size();i++)
        {
            if (a==pizza_sause[i].first)
            return pizza_sause[i].second;
        }
        for (int i =0 ;i< pizza_toppings.size();i++)
        {
            if (a==pizza_toppings[i].first)
            return pizza_toppings[i].second;
        }
    }
    int bill (a.totalpriz,b.t,c.t)
    {
        if b \c =0

        a+b+c
         
    }

};


class pizza: public order {
    int total_price=0;
    
    public:
    int set_type(string base,string sause,string toppings)
    {
        return total_price = price(base) + price(sause) + price(toppings);
    }
};



class drinks: public order {
    int total_price=0;
    
    public:
    int set_type(string base,string sause,string toppings)
    {
         return total_price = price(base) + price(sause) + price(toppings);
        

    }
};

int main()
{
    class pizza a;
    a.set_type("Regular","Marinara sauce","Mozzarella cheese");
    class drinks b;
    b.
    return 0;
}