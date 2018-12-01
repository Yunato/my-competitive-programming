#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
	long long A, B;
	int K;
	cin >> A >> B >> K;
	for(int cnt = 0; cnt < K; cnt++){
		if(cnt % 2 == 0){
			if(A % 2 == 1 ){
				A -= 1;
			}
			int temp = A / 2;
			A = temp;
			B += temp;
		}else{
			if(B % 2 == 1){ 
				B -= 1;
			}
			int temp = B / 2;
			A += temp;
			B = temp;
		}
	}
	cout << A << " " << B << endl;
	
	return 0;
}

