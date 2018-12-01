#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){
	string str;
	double k;
	cin >> str;
	cin >> k;

	int i =0;
	for(; i <= str.length(); i++){
		if(str[i] != '1')
			break;
	}
	if(k-1 < i){
		cout << '1';
	}else{
		cout << str[i];
	}

	return 0;
}
