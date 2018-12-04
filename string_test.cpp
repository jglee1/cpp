#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s1 = "07:00:01AM";
  string s2 = "12:00:01AM";
  string s3 = "12";
  cout << "s2.substr(0,2) == s3" << endl;
  cout << "s2.substr(0,2): " << s2.substr(0,2) << endl;
  cout << "typeid(s2.substr(0,2)): " << typeid(s2.substr(0,2)) << endl;
  cout << "typeid(s3): "<< typeid(s3) << endl;
  cout << (s2.substr(0,2) == s3) ;

  return 0;
}
