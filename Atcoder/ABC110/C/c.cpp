#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(void){
	string S, T, R, P;
	cin >> S >> T;
	map<char, char> s_mp;
	map<char, char> t_mp;
	for(int index = 0; index < S.size(); index++){
		s_mp[S[index]] = T[index];
		t_mp[T[index]] = S[index];
	}

	for(int index = 0; index < S.size(); index++){
		R += s_mp[S[index]];
		P += t_mp[T[index]];
	}
	if(T == R && S == P) cout << "Yes" << endl;
	else cout << "No" << endl;
	
	return 0;
}
