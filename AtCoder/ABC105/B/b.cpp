#include <iostream>
#include <string>
using namespace std;

int main(){
	int sum, buf;
	bool available = false;
	const int cake = 4, donut = 7;
	cin >> sum;
	
	buf = sum;
	if(buf % cake == 0) available = true;
	while(buf > 0){
		if(buf % donut == 0) available = true;
		buf -= cake;
	}
	buf = sum;
	if(buf % donut == 0) available = true;
	while(buf > 0){
		if(buf % cake == 0) available = true;
		buf -= donut;
	}

	if(available)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}
