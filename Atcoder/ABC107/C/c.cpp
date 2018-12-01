#include <iostream>
#include <vector>
using namespace std;

int main(){
	int N, K, index = -1, result = 200000001;
	cin >> N >> K;
	vector<int> x = vector<int>(N, 0);
	for(int n = 0; n < N; n++){
		cin >> x[n];
		if(index == -1 && x[n] > 0)index = n;
	}
	if(index == -1){
		index = N;
	}
	for(int n = 0; n <= index && n + K - 1 < N; n++){
		if(n + K - 1 < index - 1){ continue;}
		if(x[n] < 0){
			if(x[n + K - 1] < 0){
				if(result > - x[n]){
					result = - x[n];
				}
			}else{
				if(result > x[n + K - 1] - x[n] - x[n]){
					result = x[n + K - 1] - x[n] - x[n];
				}else if(result > x[n + K - 1] - x[n] + x[n + K -1]){
					result = x[n + K - 1] - x[n] + x[n + K - 1];
				}
			}
		}else{
			if(result > x[n + K -1]){
				result = x[n + K - 1];
			}
		}
		
	}
	cout << result;
	return 0;
}
