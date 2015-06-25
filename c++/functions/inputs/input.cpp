
#include <cstdlib>
#include <iostream>

struct Copyable
{
    Copyable()
    {}

    Copyable(Copyable const & copy)
    { std::cout << "Copy!"; }
};


void by_reference(Copyable & copy)
{}

void by_value(Copyable copy)
{}

void by_pointer(Copyable * copy)
{}

int main()
{
  Copyable copy;

  std::cout << "By reference: ";
  by_reference(copy);
  std::cout << std::endl;

  std::cout << "By value: ";
  by_value(copy);
  std::cout << std::endl;

  std::cout << "By pointer: ";
  by_pointer(&copy);
  std::cout << std::endl;
  
  return EXIT_SUCCESS;
}
