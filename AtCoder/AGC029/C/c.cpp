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
	int bValue;
	cin >> bValue;
	int answer = 1;
	for(int cnt = 1; cnt < N; cnt++){
		int nValue;
		cin >> nValue;
		if(nValue - bValue <= 0){
			answer++;
		}
		bValue = nValue;
	}
	cout << answer << endl;
	return 0;
}

