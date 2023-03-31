#ifndef __ATTENDEES_H__
#define __ATTENEES_H__

#include<iostream>
using namespace std;

class Pizza{
    protected:
    unordered_map<string,float> pizzatypes;
   public:
    void addPizza(){
        string name;
        pizzaadd:
        cout<<"Enter pizza name to add";
        cin>>name;
       if( pizzatypes.find(name)!=pizzatypes.end()){
        cout<<"pizza already exits";
        goto pizzaadd;
       }
       cout<<"pizza added";
    }

    void getpizzas(){
        for(auto it=pizzatypes.begin();it!=pizzatypes.end();it++){
            cout<<*it<<" ";
        }
    }
    
};

#endif