#include "Casa.h"

Casa::Casa(int quartos,int id,float preco):Imovel(preco,id){
  this->quartos=quartos;
}
int Casa::getQuartos(){
  return this->quartos;
}


string Casa:: toString(){
  return ("Casa:\nQuantidade de quartos: "+to_string(this->quartos)+ "\n" +Imovel::toString());
}