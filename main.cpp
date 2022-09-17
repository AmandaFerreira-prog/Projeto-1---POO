#include <iostream>
using namespace std;
#include "Casacomterreno.h"


int main() {
  CasacomTerreno casa(5,5,2,1598,80,56,5);
  cout<<casa.toString()<<endl;
  cout<<"-----------------------------------"<<endl;
  CasacomTerreno casa2(56,2,20,78,100,95,65);
  cout<<casa2.toString()<<endl;

}
