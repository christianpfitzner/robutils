#include <iostream>
#include "types.h"

int main() {
  std::cout << "Bla: " << std::endl;

  Point3D p1(1,2,3); 
  Point3D p2(1,2,3); 

  std::cout << p1.transpose()  << std::endl; ; 

  std::cout << p1 + p2 << std::endl;  

  return 0;
}