#include <iostream>
#include <math.h>
#include <map>
using namespace std;

map<int, int> prime;
map<int, int> means;

void comb(void){
	map<int, int> buf;
	for(auto itr = prime.begin(); itr != prime.end(); ++itr){
		buf[itr->second] = 0;
		for(int num = 1; num <= itr->second; num++){
			if(itr->second % num == 0)
				buf[itr->second] += means[num];
		}
	}
	means = buf;
}

int main(void){
	long long N, M;
	cin >> N >> M;

	for(int num = 1; num < sqrt(M); num++){
		if(M % num == 0){
			prime[num] = num;
			prime[M / num] = M / num;
		}
	}
	for(auto itr = prime.begin(); itr != prime.end(); ++itr){
		means[itr->second] = 1;
		for(int num = itr->second - 1; num > 0; num--){
			if(itr->second % num == 0){
				//if(prime[num] != 0){
					//means[itr->second] *= 2;
				//	means[itr->second] += means[num];
				//	break;
				//}
				means[itr->second]++;
			}
		}
	}
	for(int num = 1; num < N - 1; num++){
		comb();	
	}
	auto itr = means.end();
	itr--;
	cout << means[M] << endl;

	return 0;
}
