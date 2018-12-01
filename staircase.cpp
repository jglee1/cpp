#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    for (int index = 0; index < n; ++index)
    {
        int startLocOfSymbol = n - (index+1);
        for (int index2 = 0; index2 < n; ++index2)
        {
            if (index2 < startLocOfSymbol)
                cout<<" ";
            else
                cout<<"#";
        }
        cout<<endl;
    }


}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}