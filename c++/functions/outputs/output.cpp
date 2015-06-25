
#include <cstdlib>
#include <iostream>

struct Copyable
{
    Copyable()
    {}

    Copyable(Copyable const & copy)
    { std::cout << "Copy!"; }
};


Copyable & by_reference()
{ 
  Copyable copy;
  return copy;
}

Copyable by_value()
{ 
  Copyable copy;
  return copy;
}

Copyable * by_pointer()
{ 
  Copyable copy;
  return & copy;
}

int main()
{

  std::cout << "By reference: ";
  Copyable & reference = by_reference();
  std::cout << std::endl;

  std::cout << "By value: ";
  Copyable value = by_value();
  std::cout << std::endl;

  std::cout << "By pointer: ";
  Copyable *  pointer = by_pointer();
  std::cout << std::endl;
  
  return EXIT_SUCCESS;
}
