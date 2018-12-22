#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
	int D;
	cin >> D;
	if (D == 25)
		cout << "Christmas" << endl;
	else if(D == 24)
		cout << "Christmas Eve" << endl;
	else if(D == 23)
		cout << "Christmas Eve Eve" << endl;
	else 
		cout << "Christmas Eve Eve Eve" << endl;
	return 0;
}

