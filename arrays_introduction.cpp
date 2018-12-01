#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int numInt = 0;
    cin>>numInt;
    int intArray[numInt] = {0};
    for (int index = 0; index < numInt; ++index) {
        cin>>intArray[index];
    }

    //reverse
        for (int index = 0; index < numInt; ++index) {
        cout << intArray[numInt - index - 1] <<" ";
    }

    return 0;
}
