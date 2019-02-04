#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

long long X;
long long cnt;

bool checkP(){
	X-= 1;
	if(X > -1){
		cnt++;
		return true;
	}else{
		return false;
	}
}

bool checkB(){
	X-= 1;
	if(X > -1){
		return true;
	}else{
		return false;
	}
}

bool createBurger(int lebel){
	if(lebel == 0){
		return  checkP();
	}else{
		return checkB() && 
			createBurger(lebel - 1) &&
			checkP() &&
			createBurger(lebel - 1) &&
			checkB();
	}
}

long long calc(int lebel){
	if(lebel == 0)
		return 1;
	else
		return 3 + 2*calc(lebel - 1);
}

int main(void){
	long long N;
	cin >> N >> X;
	cnt = 0;
	cout << calc(N) << endl;
	createBurger(N);
	cout << cnt << endl;
	return 0;
}

