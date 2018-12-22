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
	vector<int> P(N, 0);
	int max = 0;
	int index = 0;
	for(int cnt = 0; cnt < N; cnt++){
		cin >> P[cnt];
		if(P[cnt] > max){
			max = P[cnt];
			index = cnt;
		}
	}
	long long sum = 0;
	for(int cnt = 0; cnt < N; cnt++){
		if(cnt == index){
			sum += P[cnt]/2;
		}else{
			sum += P[cnt];
		}
	}
	cout << sum << endl;
	return 0;
}

