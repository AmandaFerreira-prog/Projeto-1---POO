#include "Casacomterreno.h"

CasacomTerreno::CasacomTerreno(float valorMQ,int quartos,int idCasa,float Casapreco,float Areaterreno,float precoTerreno,int idTerreno):Casa(quartos,idCasa,Casapreco), Terreno(Areaterreno,precoTerreno,idTerreno){
  this->valorMQ=valorMQ;
}
float CasacomTerreno::calculoValor(){
  return this->valorMQ*Casa::getQuartos()*Terreno::getArea();
}
string CasacomTerreno:: toString(){
  return ("\n"+Casa::toString()+"\n"+Terreno::toString()+"\nValor da casa: " + to_string(this->calculoValor()));
}