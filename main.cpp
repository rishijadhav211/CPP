#include<bits/stdc++.h>

#include "regular.h"

using namespace std;

int main(){
    Pizza *p=NULL;
    int choice=0;
    cout<<"enter pizza type";
    cin>>choice;

    regular *r=new regular();
    r->setprice();
    cout<<r->getprice();
    
}