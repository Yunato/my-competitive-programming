#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

string createBurger(int lebel){
	if(lebel == 0){
		return "P";
	}else{
		return "B" + createBurger(lebel - 1) + "P" + createBurger(lebel - 1) + "B";
	}
}

int main(void){
	long long N, X;
	cin >> N >> X;
	string burger = createBurger(N);
	int count = 0;
	for(int index = 0; index < X; index++){
		if(burger[index] == 'P'){
			count++;
		}
	}
	cout << count << endl;
	return 0;
}
