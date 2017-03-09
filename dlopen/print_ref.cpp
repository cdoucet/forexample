
#include<iostream>

#include "print_ref.hpp"

void print_ref()
{
  int local_variable;


  std::cout << "local: " << &local_variable << std::endl;
  std::cout << "static: " << &static_variable << std::endl;
  std::cout << "extern: " << &extern_variable << std::endl;
}
