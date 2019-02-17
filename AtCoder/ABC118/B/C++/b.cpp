#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
	int N, M;
	cin >> N >> M;
	map<int, int> A;
	for(int cnt = 0; cnt < N; ++cnt){
		int K;
		cin >> K;
		for(int index = 0; index < K; ++index){
			int a;
			cin >> a;
			A[a] += 1;
		}
	}

	int result = 0;
	for(auto itr = A.begin(); itr != A.end(); ++itr){
		if (itr->second == N){
			++result;
		}
	}
	cout << result << endl;
    return 0;
}
