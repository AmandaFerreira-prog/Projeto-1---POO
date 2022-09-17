#include "Terreno.h"

Terreno::Terreno(float area,float preco,int id):Imovel(preco,id){
  if (area<0){cout<<"Área inválida"<<endl;}
  else{this->area=area;}
  
}
float Terreno::getArea(){
  return this->area;

}
string Terreno:: toString(){
  return ("Terreno:\n Área do Terreno: " +to_string(this->area)+"\n"+Imovel::toString());
}