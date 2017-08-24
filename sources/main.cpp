#include <iostream>

struct A {
  int x;
  double y;
  short z;
  char w;
};

int main()
{
  std::cout << sizeof( A ) << std::endl;
}
