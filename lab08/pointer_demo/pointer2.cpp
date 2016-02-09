#include <iostream>
#include <vector>

using std::cout;
using std::endl;

int main() {
  int i1,i2, *pi1,*pi2;
  float f1,f2, *pf1, *pf2;
  i1 = 1;
  i2 = 2;
  f1 = 3.14;
  f2 = 4.2;

  pi1 = &i1; pi2 = &i2;
  pf1 = &f1; pf2 = &f2;
  printf("i1: %d i2: %d f1: %f f2: %f\n",i1,i2,f1,f2);

  //what we can do
  *pf2 = *pi2;
  pi1 = pi2;
  *pi1 = *pf1;
  printf("i1: %d i2: %d f1: %f f2: %f\n",i1,i2,f1,f2);

  //what we can't (enforced by compiler)
  //pf1 = pi1;
  //pi1 = pf1;
}
