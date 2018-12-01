#include <iostream>
#include <map>
using namespace std;

int main(){
	long long N, X, min = 1000000000;
	cin >> N >> X;

	map<int, int> diff;
	for(int cnt = 0; cnt < N; cnt++){
		long long x, result;
		cin >> x;
		result = x - X;
		if(result < 0) result *= -1;
		diff[result] = result; 
	}
	for(int result = diff.begin()->second ;result > 1; result--){
		bool flag = true;
		for(auto itr = diff.begin(); itr != diff.end(); ++itr){
			if(itr->second % result != 0){
				flag = false;
				break;
			}
		}
		if(flag){
			cout << result;
			return 0;
		}
	}
	cout << 1;
	return 0;
}
