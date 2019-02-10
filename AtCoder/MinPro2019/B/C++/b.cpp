#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
	vector<int> counter = vector<int>(4, 0);
	for (int cnt = 0; cnt < 3; ++cnt){
		int a, b;
		cin >> a >> b;
		++counter[a];
		++counter[b];
		if(counter[a] > 2 || counter[b] > 2){
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
    return 0;
}
