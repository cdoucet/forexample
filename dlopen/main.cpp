#include <dlfcn.h>
#include <iostream>


int extern_variable;

#include "print_ref.hpp"



 
int main(int argc, char ** argv)
{
  if (argc == 1)
  {
    std::cerr << "Usage: " << argv[0] << " modules...\n";
    return 1;
  }
   
  for (int i = 1; i < argc; ++i)
  {
    void* shared_library = dlopen(argv[i], RTLD_LAZY);
    void (*module)() = reinterpret_cast<void (*)()>(dlsym(shared_library, "module"));
    if (module)
    {
      module();
      dlclose(shared_library);
    } else
    {
      std::cerr << "Error while loading: " << argv[i] << "\n";
    }
  }

  print_ref();

  return 0;
}
