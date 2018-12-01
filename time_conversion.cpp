#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    string AMPM = "AM";
    string result = "";
    string zerohour = "00";
    string strPM = "P";
    int hour = 0;

    // handle AM vs PM
    if (s.substr(8,1) == strPM) 
        AMPM = "PM";

    if (AMPM == "AM")
    {
        if (s.substr(0,2) == "12")  // 12:xx:xx AM case -> 00:xx:xx
            result = zerohour + s.substr(2,6);
        else
            result = s.substr(0,8);
    }
    else  // AMPM == "PM"
    {
        if (s.substr(0,2) == "12")  // 12:xx:xx PM case -> 12:xx:xx
            hour = stoi(s.substr(0,2));
        else
            hour = stoi(s.substr(0,2)) + 12;
        result = to_string(hour) + s.substr(2,6);
    }
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
