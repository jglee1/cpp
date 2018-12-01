#include <bits/stdc++.h>

using namespace std;

// Complete the diagonalDifference function below.
int diagonalDifference(vector<vector<int>> arr) {
  int leftSum = 0;
  int rightSum = 0;
  int result = 0;
  for (int index = 0; index < arr.size(); ++index)
  {
      leftSum += arr[index][index];
      rightSum += arr[index][arr.size() - index - 1];
  }
  result = (leftSum > rightSum)? leftSum-rightSum: rightSum-leftSum;
  return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> arr(n);
    for (int i = 0; i < n; i++) {
        arr[i].resize(n);

        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = diagonalDifference(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
