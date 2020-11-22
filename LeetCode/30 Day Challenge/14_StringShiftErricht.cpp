#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	cin >> s;

	int left, right;
	cin >> left >> right;

	int total = right - left;
	int n = s.size();
	total %= n;

	cout << "\nTotal with modulo: " << total << "\n";
	if(total < 0)
		total += n;

	cout << s.substr(n-total) + s.substr(0, n-total);

	return 0;
}