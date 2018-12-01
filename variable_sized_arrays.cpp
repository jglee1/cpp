#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int numArray = 0;
    int numQuery = 0;
    cin>>numArray>>numQuery;
    vector<int> myArray[numArray];
    int numElement = 0;
    int eachElement = 0;
    for (int index = 0; index < numArray; ++index) {
        cin>>numElement;
        for (int index2 = 0; index2 < numElement; ++index2) {
            cin>> eachElement;
            myArray[index].push_back(eachElement);
        }
    }
    //Query
    int arrayNum = 0;
    int eltIndex = 0;
    for (int index = 0; index < numQuery; ++index) {
        cin >> arrayNum >> eltIndex;
        cout << myArray[arrayNum][eltIndex]<<endl;
    }
    return 0;
}

