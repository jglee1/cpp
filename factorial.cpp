#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Complete the extraLongFactorials function below.
void extraLongFactorials(int n) {
    vector<int> factorial;
    for (int index = n; index > 0; --index)
    {
        result *= index;
    }
    cout << result;
}

vector<int> vectorIntFactorials(vector<int> g1, vector<int> g2) {
	vector<int> result;
	int size1 = g1.size();
	int size2 = g2.size();
	int maxSize = (size1 > size2)? size1:size2;
	int interimSum = 0;
	int one_carried_up = 0;
	for (int index = 0; index < maxSize+1; ++index) {
		if (index < size1 && index < size2)
			interimSum = g1[index] + g2[index] + one_carried_up;
		else if (index < size1 && index >= size2)
			interimSum = g1[index] + one_carried_up;
		else if (index >= size1 && index < size2)
			interimSum = g2[index] + one_carried_up;
		else
			interimSum = one_carried_up;
		
		if (index = maxSize && interimSum != 0)
			result.push_back(interimSum);
		else if (interimSum < 10) {
			result.push_back(interimSum);
			one_carried_up = 0;
		}
		else {
			result.push_back(interimSum - 10);
			one_carried_up = 1;
		}
	}
	return result;
	
}

vector<int> convertNumToVector(int n) {
	// 124 -> result = {4,2,1}
	vector<int> result;
	string strNum = reverse(to_string(n));
	
	
}

vector<int> addition(vector<int> g1, vector<int> g2) {
	vector<int> result;
	int size1 = g1.size();
	int size2 = g2.size();
	int maxSize = (size1 > size2)? size1:size2;
	int interimSum = 0;
	int one_carried_up = 0;
	for (int index = 0; index < maxSize+1; ++index) {
		if (index < size1 && index < size2)
			interimSum = g1[index] + g2[index] + one_carried_up;
		else if (index < size1 && index >= size2)
			interimSum = g1[index] + one_carried_up;
		else if (index >= size1 && index < size2)
			interimSum = g2[index] + one_carried_up;
		else
			interimSum = one_carried_up;
		
		if (index = maxSize && interimSum != 0)
			result.push_back(interimSum);
		else if (interimSum < 10) {
			result.push_back(interimSum);
			one_carried_up = 0;
		}
		else {
			result.push_back(interimSum - 10);
			one_carried_up = 1;
		}
	}
	return result;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    extraLongFactorials(n);

    return 0;
}
