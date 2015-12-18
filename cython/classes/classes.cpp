#include "classes.h"
#include <iostream>

MainClass::MainClass(BaseClass *parent): BaseClass(parent), total(0)
{
    std::cout << "   C++: creating MainClass at " << this;
    if(parent) std::cout << " with parent at " << parent;
    std::cout << std::endl;
}

MainClass::~MainClass()
{
    std::cout << "   C++: destroying MainClass at " << this << std::endl;
}

void MainClass::accumulate(int new_number){
    this->total += new_number;
}

int MainClass::get_total(){
    return this->total;
}

BaseClass::BaseClass(BaseClass *parent)
{
  std::cout << "   C++: creating BaseClass at " << this;
  if(parent) std::cout << " with parent at " << parent;
  std::cout << std::endl;
}

BaseClass::~BaseClass()
{
  std::cout << "   C++: destroying BaseClass at " << this << std::endl;
}
