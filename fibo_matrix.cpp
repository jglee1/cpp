#include <bits/stdc++.h>
#include <math.h>

using namespace std;

vector<string> split_string(string);

// Complete the solve function below.
int solve(int a, int b, int n) {
	double phi_1 = 0.5*(1.0+sqrt(5));
	double phi_2 = 0.5*(1.0-sqrt(5));

	double fibo = 1.0/(sqrt(5))*pow( ((1.0+sqrt(5))/2.0), n) - 1.0/(sqrt(5))*pow( ((1.0-sqrt(5))/2.0), n);
	return fibo;
}

int fibo1 = solve(3,7,5);
cout<<fibo1;
