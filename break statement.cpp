/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int
main ()
{
  for (int i; i < 11; ++i)
    {
      if (i == 8)
	{
	  break;
	}
      cout << i << endl;
    }

  return 0;
}
