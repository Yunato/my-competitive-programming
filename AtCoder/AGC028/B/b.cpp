#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int factorial(int k){
	int sum = 1;
	for(int count = 1; count <= k; count++){
		sum *= count;
	}
	return sum;
}

int halfSum(int num){
	int n = num;
	int sum = 0;
	while(n != 0){
		sum += n;
		n /= 2;
	}
	return sum;
}

int main(void){
	int N;
	cin >> N;
	vector<long long> A = vector<long long>(N, 0);
	long long sum = 0;
	for(int index = 0; index < N; index++){
		cin >> A[index];
		//sum += A[index];
	}
	long long fact = factorial(N);
	long long Fact = fact;
	while(fact != 0){
		sum += fact;
		fact -= 2;
	}
	long long S = 0;
	float standard = N / 2.0f - 0.5f;	
	cout << "sum" << sum << endl;
	cout << "standard" << standard << endl;

	if(N % 2 == 0){
		for(int index = 0; index < N; index++){
			S += (sum - (abs(standard - index) - 0.5f)) * A[index];
			cout << ((sum - abs(standard - index) - 0.5f)) << " " << A[index] << endl;
		}
	}else{
		for(int index = 0; index < N; index++){
			S += (sum - abs(standard - index)) * A[index];
			cout <<(sum - abs(standard - index)) << " " << A[index] << endl;
		}
	}

	cout << S << endl;
	
	return 0;
}
