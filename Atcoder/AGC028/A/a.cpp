#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
	long long N, M, LCM;
	string S, T;
	cin >> N >> M;
	cin >> S >> T;

	int n, m, r;
	if(N < M){
		n = M;
		m = N;
	}else{
		n = N;
		m = M;
	}
	r = n % m;
	while(r != 0){
		n = m;
		m = r;
		r = n % m;
	}
	LCM = (N * M) / m ;

	int skipN, skipM;
	skipN = LCM / N;
	skipM = LCM / M;
	map<int, int> str;
	for(int index = 0; index < S.size(); index++){
		str[1 + index * skipN] = S[index];
	}
	bool loopBreak = false;
	for(int index = 0; index < T.size(); index++){
		if(str[1 + index * skipM] != 0 && str[1 + index * skipM] != T[index]){
			loopBreak = true;	
			break;
		}
		str[1 + index * skipM] = T[index];
	}

	if(loopBreak){
		cout << -1 << endl;
		return 0;
	}
	cout << LCM << endl;
}
