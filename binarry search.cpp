// Binary searching and sorting
#include <iostream>

using namespace std;

int
binarysearch (int arr[], int size, int key)
{
  int start = 0;
  int end = size - 1;

  int mid = start + (end - start) / 2;

  while (start <= end)
    {
      if (arr[mid] == key)
	{
	  return mid;
	}

      // if we are going to right wala part for searching
      if (key > arr[mid])
	{
	  start = mid + 1;
	}
      else
	{			//key<arr[mid]
	  end = mid - 1;
	}
      mid = start + (end - start) / 2;
    }
  return -1;
}


intmain ()
{
  int even[6] = { 2, 4, 6, 8, 12, 18 };
  int odd[5] = { 3, 8, 11, 14, 16 };

  int evenindex = binarysearch (even, 6, 18);

  cout << "index of 18 is " << evenindex << endl;

  int oddindex = binarysearch (odd, 5, 8);

  cout << "index of 8 is " << oddindex << endl;


  return 0;
}

