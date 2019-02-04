#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
	string S;
	cin >> S;
	if(S.size() == 2) cout << S;
	else{
		for(int index = 0; index < S.size(); index++)
			cout << S[S.size() - 1 - index];
	}
	cout << endl;
	return 0;
}
