#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int num, buf, digit = 0;
	double result = 0;
	int element[4096];
	cin >> num;
	while(num  !=  0){
		if(num < 0){
			buf = num;
			if(num % -2 != 0)
				num = (num / -2) + 1;
			else
				num = (num / -2);
			element[digit++] = (buf - num * -2 );
		}else{
			element[digit++] = (num % -2);
			num /= -2;
		}
	}
	if(digit == 0)
		cout << 0;
	for(;digit > 0;){
		cout << element[--digit];
	}

	return 0;
}
