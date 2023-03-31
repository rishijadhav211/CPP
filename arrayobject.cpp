#include <bits/stdc++.h>
using namespace std;

class player
{
protected:
    string name;
    int age;
    int jersy_no;
    string typeofplayer;
    int id;

public:
    void getDetails(int id)
    {
        this->id=id+1;
        cout << "Enter name:" << endl;
        cin >> name;
        cout << "enter Age:" << endl;
        cin >> age;
        cout << "enter jersy No." << endl;
        cin >> jersy_no;
        cout << "enter player type" << endl;
        cin >> typeofplayer;
    }
    void showDetails()
    {
        cout << name << "\t" << jersy_no << "\t\t" << age << "\t\t" << typeofplayer;
    }
};

class bowler : public player
{
    int wickets = 0;
    float overs = 0.0;

public:
    void took_wicket()
    {
        wickets++;
    }
    void completedOver()
    {
        overs++;
    }

    void showBowlerinfo()
    {
        cout <<"\t"<<id<<"\t" <<name << "\t" << wickets << "\t" << overs <<endl;
    }
};

class batsman : public player
{

    int runs = 0;
    int balls = 0;
    string status = "Not playing";

public:
    void addscore()
    {
        cout << "enter batsman run";
        cin >> runs;
        cout << "enter ball faced";
        cout << balls;
    }

    void showBatsmaninfo()
    {
        cout << name << "\t" << runs << "\t" << balls;
    }
};

int main()
{
   
    bowler bowl[10];
    batsman bat[10];
    int bw = 0;
    int bt = 0;
    char flag = 'y';
    cout << "Enter Bolwer details" << endl;
    while (bw < 10 && flag == 'y')
    {
        bowl[bw].getDetails(bw);
        bw++;
        cout << "want to add another player(y/n)";
        cin >> flag;
    }
    flag = 'y';
    cout << "Enter Batsman details" << endl;
    cout<<"want to add batsman(y/n)";
    cin>>flag;
    while (bt < 10 && flag == 'y')
    {
        bowl[bt].getDetails(bt); // takes name and jersy no.
        bt++;
        cout << "want to add another player(y/n)";
        cin >> flag;
    }

    while (1)
    {
        int choice = 0;
        cout<<endl<<endl;
        cout << "\t\t\t\t\tMenu"<<endl;
        cout << "\t1)view players" << endl;
        cout << "\t2)add bowling score"<<endl;
        cout << "\t3)add batting score"<<endl;
        cout << "\t4)view bowling score"<<endl;
        cout<<  "\t5) view batting score"<<endl;
        cout<<  "\t6)exit"<<endl;
        cin>>choice;

        if(choice==6) break;
        switch (choice)
        {
        case 1:
            cout << "name\tjersy_no\tage\ttypeofplayer"<<endl;
            for (int i = 0; i < bt; i++)
            {
                bat[i].showDetails();
            }
            for (int i = 0; i < bw; i++)
            {
                bowl[i].showDetails();
            }
            break;
        case 2:
            int id;
            cout << "enter player id for bowling score" << endl;
            cin >> id;
            id--;
            if (id < bw)
            {
                int choice;
            enter:
                cout << "enter choice to 1)Wicket 2)Over" << endl;
                cin >> choice;
                if (choice == 1)
                {
                    bowl[id].took_wicket();
                    cout<<"wicker added..."<<endl;
                }
                else if (choice == 2)
                {
                    bowl[id].completedOver();
                    cout<<"over added..."<<endl;
                }
                else
                {
                    cout << "invalid choice";
                    goto enter;
                }
            }
            else
            {
                cout << "No such a player id";
            }
            break;

        case 3:
        break;
        case 4:
        cout<<"Name\t\twickets\t\tovers"<<endl;
        for(int i=0;i<bw;i++){
            bowl[i].showBowlerinfo();
        }
        break;

        default:
        cout<<"enter valid choice";
            break;
        }
    }
}