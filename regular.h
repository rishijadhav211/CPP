#ifndef __REGULAR_H__
#define __ORDERPIZZA_H__

#include "animal.h"
#include "Coldrinks.h"
#include <iostream>
using namespace std;

class order : public Pizza,public Coldrinks
{
public:
  
  vector<pair<string,int>> orderpizza()
   {
      getpizzas();
      selectpizzas();
      return vector<pair<string,int>>selectedpizzas;
   }

  vector<pair<string,int>> ordercoldrink(){
         getdrinks();
         selectdrinks();
         return vector<pair<string,int>> selectedcorldrinks;
   }


};

#endif