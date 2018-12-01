#include <iostream>
using namespace std;

int main(){
	int K, gu, ki;
	cin >> K;
	if(K % 2 == 1){
		ki = K / 2 + 1;	
		gu = K / 2;
	}else{
		gu = ki = K / 2;
	}
	cout << ki * gu;
	return 0;
}
