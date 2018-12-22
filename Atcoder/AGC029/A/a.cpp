#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
	string s;
	cin >> s;
	long long count = 0;
	int wCount = 0;
	for(int index = 0; index < s.size(); index++){
		if('W' == s[index]){
			count += (index - wCount);
			++wCount;
		}
	}
	cout << count << endl;
	return 0;
}

