#pragma once
#include <Alimento.hpp>
#include<string>

class Mascota
{
    private:
    // implementacion oculta
    int Energia;
    int Felicidad;
    std::string nombre;

  public:
  //interfaz 
  mascota(std::string nombre)
{
    this->Energia=0;
    this ->Felicidad=0;
  }
  ~Mascota(){}
  void Comer(Alimento alimento){
  Energia +=alimento.ExtraerEnergia();
  }

  void Jugar(){
    Energia -=1;
    Felicidad +=1;
}
   int LeerFelicidad(){
    return this ->Felicidad;

   }
   int LeerEnergia(){
    return this ->Energia;
   }
std::string Leernombre(){
  return this->nombre;
}

};
