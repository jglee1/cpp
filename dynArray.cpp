#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> dynArray(3); //dynamic array of int

  dynArray[0] = 365;
  dynArray[1] = -245;
  dynArray[2] = 100;

  cout<<"Number of integers in Array: "<<dynArray.size()<<endl;

  cout<<"Enter another element to insert"<<endl;

  int newValue = 0;
  cin>>newValue;
  dynArray.push_back(newValue);

  cout<<"Number of integers in Array: "<<dynArray.size()<<endl;
  cout<<"Last element in Array: "<<dynArray[dynArray.size()-1]<<endl;

  return 0;

}

