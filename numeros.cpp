#include <iostream>
#include <cstdlib>
#include <math.h>

using std::cout;
using std::endl;

int numeros()
{
  int i, r, c;
  for(i=0; i<90; i++)
  {
    r=i%2;
    if(2==0)
    {
       	cout<<i<<endl;
	c++;
    }
    if(c==25)
    {
      break;
    }
  }	
  return 0;
}

