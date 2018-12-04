#include <iostream>
#include <string>
using namespace std;

class Human
{
private:
  // Private member data:
  string name;
  int age;

public:
  Human(string humansName, int humansAge) // overloaded
  {
    name = humansName;
    age = humansAge;
    cout<<"Overloaded constructor creates ";
    cout<< name << " of age " << age << endl;
  }

  void IntroduceSelf()
  {
    cout<<"I am " + name << " and am ";
    cout<< age << " years old" << endl;
  }
};

int main()
{
  Human firstMan("Adam", 25);
  Human firstWoman("Eve", 28); 

  firstMan.IntroduceSelf();
  firstWoman.IntroduceSelf();

  return 0;
}
