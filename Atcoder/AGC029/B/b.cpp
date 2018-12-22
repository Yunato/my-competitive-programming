#include <iostream>
#include <vector>
#include <cmath>
#include <map>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
	int N;
	cin >> N;
	map<long long, long long> A;
	int answer = 0;
	int inputMax = 0;
	for(int cnt = 0; cnt < N; cnt++){
		long long a;
		cin >> a;
		A[a] ++;
		if(inputMax < a){
			inputMax = a;
		}
	}
	int index = log2(inputMax) + 2;
	
	while(true){
		map<long long, long long> pairCount;
		for(auto itr = A.begin(); itr != A.end(); itr++){
			bool isExist = false;
			if(0 == itr->second) continue;
			for(int cnt = 1; cnt <= index; cnt++){
				long long pair = pow(2, cnt) - itr->first;
				if(pair < 1 || A[pair] == 0) continue;
				if((pair == itr->first && itr->second > 1) 
						|| (pair != itr->first && itr->second > 0)){
					//cout << itr->first << " - " << pair << endl;
					pairCount[itr->first]++;
					pairCount[pair]++;
					isExist = true;
				}
			}
		}
		if(pairCount.size() == 0) break;
		for(auto itr = pairCount.begin(); itr != pairCount.end(); itr++){
			//cout << itr->first << " " << itr->second << endl;
			if(itr->second != 2) continue;
			for(int cnt = 1; cnt <= index; cnt++){
				long long pair = pow(2, cnt) - itr->first;
				if(pair < 1 || A[pair] == 0) continue;
				if((pair == itr->first && A[pair] > 1) 
						|| (pair != itr->first && A[itr->first] > 0)){
					++answer;
					A[itr->first]--;
					A[pair]--;
					itr->second -= 2;
					pairCount[pair] -= 2;
					break;
				}
			}
		}
	}
	cout << answer << endl;
	
	return 0;
}

