#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// Complete the dayOfProgrammer function below.
string dayOfProgrammer(int year)
{
    const int mon7 = 215; //7 months' days

    short int feb; //days in february
    if(year < 1918) //julian
        feb = year%4 ? 28 : 29;
    else if(year > 1918) //gregorian
        feb = !(year%400) || year%100&&!(year%4) ? 29 : 28;
    else //dreaded 1918
        feb = 15;
    feb = 256 - (feb + mon7);
    return to_string(feb) + ".09." + to_string(year);

}
