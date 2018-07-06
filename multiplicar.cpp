#include <iostream>
#include <cstdlib>
#include <math.h>

using std::cout;
using std::endl;

int multiplicar(int x, int y)
{
  int r;
  r = x*y;
  cout<<"El resultado de la multiplicacion es "<<r<<endl;
  return 0;
}

int potencia(int x)
{
  int s;
  s = pow(x,2);
  cout<<"El resultado de"<<x<<"elevado a la cuadrado es "<<s<<endl;
  return 0;
}

int main()
{
  int a=17;
  int b=31;
  multiplicar(a, b);
  potencia(a);
}
