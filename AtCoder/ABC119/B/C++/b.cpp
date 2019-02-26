#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
	int N;
	cin >> N;
	double result = 0;
	for(int cnt = 0; cnt < N; ++cnt){
		long double x;
		string u;
		cin >> x >> u;
		if (u == "JPY"){
			result += x;
		}else{
			result += x * 380000;
		}
	}
	cout << result << endl;
    return 0;
}
