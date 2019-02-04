#include <iostream>
#include <cmath>
using namespace std;

int countYaku(long long val){
	int count = 0;
	for(int cnt = 1; cnt < val; cnt++){
		if(val % cnt ==  0){
			count++;
		}
	}
	return count;
}

int main(void){
	int N;
	cin >> N;
	long long val = 1;
	for(int cnt = 1; cnt <= N; cnt++){
		val *= cnt;
	}
	long long num = 1;
	int count = 0;
	while(val > pow(num, 2)){
		long long a = pow(num, 2);
		if(val % a == 0){
			if(17 == countYaku(num)){
				count++;
			}
		}
		num++;
	}
	cout << num << endl;
	cout << count;
	return 0;
}
