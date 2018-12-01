#include <iostream>
using namespace std;

int main(void){
	int N, K;
	long result;
	cin >> N >> K;
	long cnt = N / K;
	result = cnt * cnt * cnt;
	if(K % 2 == 0){
		cnt = (N + K / 2) / K;
		result += cnt * cnt * cnt;
	}
	cout << result;
	return 0;
}
