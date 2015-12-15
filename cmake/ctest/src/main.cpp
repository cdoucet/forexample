#include <cstdlib>
#include <fstream>
#include <iostream>
#include <sstream>

int string_to_int(char* toConvert)
{
  std::stringstream converter(toConvert);
  int conversion;
  converter >> conversion;
  return conversion;
}

int main(int argc, char** argv)
{
  int left = string_to_int(argv[1]);
  int right = string_to_int(argv[2]);

  std::ofstream file(argv[3], std::ios::out | std::ios::trunc);
  if (file)
    file << left + right << std::endl;
  else
    return EXIT_FAILURE;

  return EXIT_SUCCESS;
}
