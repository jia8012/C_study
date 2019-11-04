#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include<stdio.h>
using namespace std;
int main() {
	int n, m;
	string s = "";
	cin >> n >> m;
	int x = (int)pow(26, n) - m;
	while (x) {
		s += 'a' + x % 26;
		x /= 26;
	}
	for (unsigned int i = 0; i < n - s.size(); i++) cout << "a";
	reverse(s.begin(), s.end());
	cout << s;
	return 0;
}