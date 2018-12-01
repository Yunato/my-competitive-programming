#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
	int Q;
	cin >> Q;
	for(int cnt = 0; cnt < Q; cnt++){
		long long A, B, C;
		cin >> A >> B >> C;
		if(C % 2 != 0){
			cout << "No" << endl;
			continue;
		}
		long long Xa = 0, Xb = 0, Xc = 0;
		long long Sum = (A * 100 + B * 10 + C)/2;
		long long temp = Sum;
		if(A != 0 && Sum / 100 != 0){
			if(A >= Sum / 100){
				Xa = Sum / 100;
			}else{
				Xa = A;
			}
			A -= Xa;
			Sum -= Xa * 100;
		}
		if(B != 0 && Sum / 10 != 0){
			if(B >= Sum / 10){
				Xb = Sum / 10;
			}else{
				Xb = B;
			}
			B -=  Xb;
			Sum -= Xb * 10;
		}
		if(C != 0 && Sum != 0){
			if(C >= Sum){
				Xc = Sum;
			}else{
				Xc = C;
			}
			C -=  Xc;
			Sum -= Xc;
		}
		if(Sum != 0 || (A * 100 + B * 10 + C) != temp){
			cout << "No" << endl;
			continue;
		}
		cout << "Yes" << endl;
	}
	return 0;
}
