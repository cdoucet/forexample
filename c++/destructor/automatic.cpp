
#include <cstdlib>
#include <iostream>

struct Destroyable
{
  ~Destroyable()
  { std::cout << "Destruction!" << std::endl; }
};

int main()
{
  Destroyable value;
  Destroyable & reference();
  Destroyable * pointer();

  return EXIT_SUCCESS;

}
