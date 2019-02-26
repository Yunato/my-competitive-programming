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
	string a = "";
	for(char c : S){
		if(c != '/'){
			a += c;
		}
	}
	string result = 20190430 >= atoi(a.c_str()) ? "Heisei" : "TBD";
	cout << result << endl;

    return 0;
}
