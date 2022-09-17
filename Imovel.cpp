#include "Imovel.h"

Imovel::Imovel(float preco,int id){
  this->preco=preco;
  this->id=id;
}
string Imovel:: toString(){
  return ("Preço do Imovel: "+to_string(this->preco)+"\nidentificador do imovel: "+to_string(this->id));
}