// C++ Arrays
// Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

// To declare an array, define the variable type, specify the name of the array followed by square brackets and specify the number of elements it should store:

// Access the Elements of an Array
// You access an array element by referring to the index number.

// This statement accesses the value of the first element in cars:

#include <iostream>
#include <string>
using namespace std;

int main() {
  string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
  cout << cars[0];
  return 0;
}
