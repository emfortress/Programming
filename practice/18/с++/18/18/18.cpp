﻿#include <iostream>
#include <vector>
#include <string_view>
#include <map>
#include <cmath>

using namespace std;
int main() {
	string c = "halloklempnerdasistfantastischfluggegecheimen", s;
	map<char, int> qwe;
	double y = 1;
	for (int i = 0; i < c.size(); i++) {
		qwe[c[i]]++;
	}
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		y = y * qwe[s[i]];
	}
	cout<< y / pow(c.size(), 4);

}

