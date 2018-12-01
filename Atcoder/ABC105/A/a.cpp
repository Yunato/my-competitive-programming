#include <iostream>
using namespace std;

int main(){
	int senbei, people, result;
	cin >> senbei >> people;
	if(senbei % people == 0)
		cout << 0;
	else
		cout << 1;
	return 0;
}
