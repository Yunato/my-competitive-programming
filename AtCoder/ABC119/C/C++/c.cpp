#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int N, A, B, C;
int minABC(int num){
	int result = min(abs(A - num), abs(B - num));
	result = min(result, abs(C -num));
	return result;
}

int main(void){
	cin >> N >> A >> B >> C;
	vector<int> L;
	long long result = 0;
	
	for(int cnt = 0; cnt < N; ++cnt){
		int l;
		cin >> l;
		bool a, b, c;
		a = b = c = true;
		if(A < l){
			result += l - A;	
			a = false;
		}else if(abs(A - l) < 10){
			result += abs(A - l);
			a = false;
		}else if(abs(B - l) < 10){
			result += abs(B - l);
			b = false;
		}else if(abs(C - l) < 10){
			result += abs(C - l);
			c = false;
		}else{
			L.push_back(l);	
		}
	}

	if(c){
		for(int i : L){
			if(mini > i){
				mini = i;
			}
		}
	}
	
	if(mini >= C){
		result += C - mini;
		c = false;
	}
	
	if(a){
		
	}
		
	if(b){
		
	}
		
	if(c){
		
	}
		

}
//	if(L.size() != 0){
//		int digit = L.size() - 1;
//		int Max = pow(2, digit);
//		int minValue = 1e7;
//		for(int cnt = 0; cnt < Max; ++cnt){
//			int target = L[0];
//			int tmp = 0;
//			int score = 0;
//			for(int shift = 0; shift < digit; ++shift){
//				int shiftbit = 1 << shift;
//				int hoge = cnt & shiftbit;
//				if(hoge == 0){
//					tmp += minABC(target);
//					target = L[shift + 1];
//				}else{
//					target += L[shift + 1];
//					score += 10;
//				}
//			}	
//			tmp += minABC(target);
//			cout << tmp << endl;
//			minValue = min(minValue, tmp + score);
//		}
//		result += minValue;
