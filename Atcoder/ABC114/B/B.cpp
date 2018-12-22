#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <string>
using namespace std;
int main(void){
	string S;
	cin >> S;
	int min = 100000;
	for(int cnt = 0; cnt < S.size() - 2; cnt++){
		int value = (S[cnt]-'0') * 100;
		value += (S[cnt+1] - '0') * 10;
		value += (S[cnt] - '0');
		if(abs(753 - value) < min){
			min = abs(753 - value);
		}
	}
	cout << min << endl;
	return 0;
}

		


