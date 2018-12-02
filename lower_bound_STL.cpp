#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int sameNumSearchLeft(int* arr, int mid, int target) {
    for (int index = mid; index > 0; --index) {
        if (arr[index-1] != target)
            return index;
    }
    return 0;
}

int diffNumSearchRight(int* arr, int r, int target, int arrCount) {
//    cout <<"arr: " << arr << endl;
//    cout<< "arrCount: "<< arrCount <<endl;
//    cout<<"r: "<< r << endl;
    
    for (int index = r; index < arrCount-1; ++index) {
        if (arr[index]<target && arr[index+1]>target) {
            //cout<<index<<" "<<arr[index]<<endl;
            return index+1;
        }
    }
    return arrCount-1;

}


void binarySearch(int* arr, int l, int r, int target, int arrCount) {
    if ( l <= r) {
        int mid = l + (r-l)/2;
        // If the element is present at the middle itself
        if (arr[mid] == target) {
            cout<<"Yes "<< sameNumSearchLeft(arr,mid,target) + 1 <<endl;
            return;
        } else if (arr[mid] > target) {   // target is in the left from the mid
            binarySearch(arr, l, mid-1, target, arrCount);
        } else {  // target is in the right from the mid
            binarySearch(arr, mid+1, r, target, arrCount);
        }
    } else {
        //cout << diffNumSearchRight(arr,r,target,arrCount)+1 <<endl;
        cout<<"No "<< diffNumSearchRight(arr,r,target,arrCount)+1 <<endl;
        return;
    }
}



int main() {
    int numElement = 0;
    cin >> numElement;
    int intArray[numElement] = {0};
    for (int index = 0; index < numElement; ++index) {
        cin>>intArray[index];
    }
    int numQuery = 0;
    cin >> numQuery;
    int queryArray[numQuery] = {0};
    for (int index = 0; index < numQuery; ++index) {
        cin >> queryArray[index];
    }

    for (int index = 0; index < numQuery; ++index) {
        binarySearch(intArray, 0, numElement-1, queryArray[index], numElement);
    }

/**        
    for (int index = 0; index < numQuery; ++index) {
        for (int index2 = 0; index2 < numElement; ++index2) {
            if (intArray[index2] == queryArray[index]) {
                cout<<"Yes "<< index2 + 1 << endl;
                break;
            }
            else if (intArray[index2] > queryArray[index]) {
                cout<<"No "<< index2 + 1 <<endl;
                break;
            }
                
        }
    }
**/

    return 0;
}
