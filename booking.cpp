#include <bits/stdc++.h>
using namespace std;
struct userstruct{
    string id;
    string name;
    float amount;
};

class Bank{
    private:
    userstruct user[10];
    int total=0;
    public:
    
    void deposit();
    void widthdraw();
    void show();
    void adddata();
};
void Bank::adddata(){
    if(total==9){
        cout<<"no space"<<endl;
        return;
    }
        int i=total;
        cout<<"enter id"<<endl;
        cin>>user[i].id;
        cout<<"enter name"<<endl;
        cin>>user[i].name;
        cout<<"enter amount"<<endl;
        cin>>user[i].amount;
        cout<<"user added successfully"<<endl;
        total++;
    }

void Bank::show(){
        string id;
        cout<<"enter id to view";
        cin>>id;
        
        for(int i=0;i<total;i++){
            if(user[i].id==id){
                cout<<user[i].name<<endl;
                cout<<user[i].amount<<endl;
                return;
            }
        }
        cout<<"no userf found"<<endl;
    }
void Bank::deposit(){
        string id;
        cout<<"enter id ";
        cin>>id;
        for(int i=0;i<total;i++){
            if(user[i].id==id){
            float amount;
            cout<<"enter amount"<<endl;
            cin>>amount;
            user[i].amount+=amount;
            cout<<"deposited..."<<endl;
            cout<<"current amount of user"<<user[i].amount<<endl;
            return;
            }
        }
        cout<<"no user found";
    }
    
void Bank:: widthdraw(){
    string id;
    cout<<"enter id to widthdraw";
    cin>>id;
    
    for(int i=0;i<total;i++){
        if(user[i].id==id){
            float amount;
            cout<<"Availaible amount"<<user[i].amount<<endl;
            widthdraw :
            cout<<"enter amount to widthdraw"<<endl;
            cin>>amount;
            if(amount>user[i].amount){
                cout<<"not enought amount"<<endl;
                goto widthdraw;
            }
            user[i].amount-=amount;
            cout<<"total amount"<<user[i].amount;
            return;
        }
    }
    cout<<"no user found"<<endl;
}

int main(){
    Bank b;
    int choice=0;
    while(true){
        cout<<"enter choice"<<endl;
        cin>>choice;
        
        if(choice>4) break;
        switch (choice){
            case 1:
                b.show();
            break;
            
            case 2 :
            b.deposit();
            break;
            
            case 3 :
            b.adddata();
            break;
            
            case 4:
            b.widthdraw();
            break;
        }
        
    }

    return 0;
}
