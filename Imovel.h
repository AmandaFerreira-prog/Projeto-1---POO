#ifndef IMOVEL_H
#define IMOVEL_H
#include<iostream>
using namespace std;

class Imovel{
  public:
    Imovel(float preco,int id);
    string toString();
  private:
    float preco;
    int id;
};



#endif