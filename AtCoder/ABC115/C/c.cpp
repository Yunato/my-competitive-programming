#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
	int N, K;
	cin >> N >> K;
	vector<long long>h(N, 0);
	for(int cnt = 0; cnt < N; cnt++){
		cin >> h[cnt];
	}
	sort(h.begin(), h.end());
	long long max = 1000000000;
	K--;
	for(int cnt = 0; cnt < N - K; cnt++){
		if(max > h[cnt + K] - h[cnt]){
			max = h[cnt + K] - h[cnt];
		}
	}
	cout << max << endl;
	return 0;
}

