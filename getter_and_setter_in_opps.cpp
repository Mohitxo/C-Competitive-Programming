#include <iostream>
using namespace std;


class Hero
{
  // properties
private:
  char sexlife;

public:
  char gender;
  string name;

  int getsexlife ()
  {
    return sexlife;
  }

  int getgender ()
  {
    return gender;
  }

  int getname ()
  {
    return name;
  }

  void setsexlife (int v)
  {
    sexlife = v;
  }
};

int
main ()
{
  Hero dikshant;

  cout << "dikshant sexlife is " << dikshant.getsexlife () << endl;

  dikshant.name = "dikshant";
  cout << "dikshant name is " << dikshant.getname () << endl;

  dikshant.setgender = 'M';
  cout << "dikshant gender is " << dikshant.getgender () << endl;


  return 0;
}

// Getters and setters are used to protect your data, particularly when creating classes.
// For each instance variable, a getter method returns its value while a setter method sets or updates its value

