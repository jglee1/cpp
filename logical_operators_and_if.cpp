#include <iostream>
using namespace std;

int main()
{
  cout<<"Use boolean values (0 / 1) to answer the questions"<<endl;
  cout<<"Is it raining?"<<endl;
  bool isRaining = false;
  cin >> isRaining;
  
  cout<<"Do you have buses on the street?" << endl;
  bool busesPly = false;
  cin >> busesPly;

  //Condtional statement uses logical NOT and AND
  if (isRaining && !busesPlay)
    cout<<"You cannot go to work" << endl;
  else
    cout<<"You can go to work" << endl;

  if (isRaining && busesPlay)
    cout<<"Take an umbrella" << endl;

  if ((!isRaining) && busesPlay)
    cout<<"Enjoy the sun and have a nice day" << endl;

  return 0;
}

