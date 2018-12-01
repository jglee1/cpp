#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;


int max_of_four(int a, int b, int c, int d) {
    int maxNum = 0;
    vector<int> myNums;
    myNums.push_back(a);
    myNums.push_back(b);
    myNums.push_back(c);
    myNums.push_back(d);
    for (auto i = myNums.begin(); i != myNums.end(); ++i) {
        if (maxNum < *i)
            maxNum = *i;
    }
    return maxNum;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

