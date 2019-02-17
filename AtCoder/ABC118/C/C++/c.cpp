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

	vector<int> A = vector<int>(N, 0);
	long long minLP = 1e10;
	int minIndex = -1;
	int monsterNum = 0;

	for (int cnt = 0; cnt < N; ++cnt){
		cin >> A[cnt];
		if (minLP > A[cnt]){
			minLP = A[cnt];
			minIndex = cnt;
		}
		++monsterNum;
	}

	while(monsterNum > 1){
		int count = 0;
		long long nextMinLP = 1e10;
		int nextMinIndex = -1;
		for(int cnt = 0; cnt < N; ++cnt){
			if(cnt == minIndex){
				continue;
			}
			A[cnt] %= A[minIndex];
			if(A[cnt] == 0){
				++count;
			}else if(nextMinLP > A[cnt]){
				nextMinLP = A[cnt];
				nextMinIndex = cnt;
			}
		}
		if(count == N - 1){
			break;
		}
		minLP = nextMinLP;
		minIndex = nextMinIndex;
	}
	cout << minLP << endl;
    return 0;
}
