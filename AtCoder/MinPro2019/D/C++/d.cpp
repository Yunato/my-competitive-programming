#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
	int L;
	cin >> L;
	vector<long long> a = vector<long long>(L, 0);
	long long result = 0;
	for (int cnt = 0; cnt < L; ++cnt){
		cin >> a[cnt];
		if ( a[cnt] % 2 == 0){
			++result;
		}
	}
	for(int cnt = 0; cnt < L; ++cnt){
		if (a[cnt] != 0){
			if (a[cnt] % 2 == 0){
				--result;
			}
			break;
		}
		--result;
	}
	for(int cnt = a.size() - 1; cnt >= 0; --cnt){
		if (a[cnt] != 0){
			if (a[cnt] % 2 == 0){
				--result;
			}
			break;
		}
		--result;
	}
	cout << result-1 << endl;
    return 0;
}
