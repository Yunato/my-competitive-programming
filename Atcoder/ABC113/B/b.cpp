#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
	int N, T, A;
	cin >> N >> T >> A;
	int resultIndex;
	double min = 10<<6;
	for(int index = 0; index < N; index++){
		int H;
		cin >> H;
		if(abs((T - H * 0.006f) - A) < min){
			min = abs((T - H * 0.006f) - A);
			resultIndex = index;
		}
	}
	cout << resultIndex + 1 << endl;
	return 0;
}
