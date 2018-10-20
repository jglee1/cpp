#include <iostream>
using namespace std;

enum CardinalDirections
{
  North = 25,
  South,
  East,
  West
};

int main()
{
  cout<<"Displaying Directions and their symbolic values"<<endl;
  cout<<"North: "<<North<<endl;
  cout<<"South: "<<South<<endl;
  cout<<"East: "<<East<<endl;
  cout<<"West: "<<West<<endl;

  CardinalDirections windDirection = South;
  cout<<"variable windDirection= "<<windDirection<<endl;

  return 0;
}

