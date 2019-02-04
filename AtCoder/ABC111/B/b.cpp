# include <iostream>
using namespace std;

int main(void){
	int N;
	cin >> N;
	int digit = N / 100;
	if(N > digit * 100 + digit * 10 + digit) digit++;
	cout << digit * 100 + digit * 10 + digit << endl;
	return 0;
}

