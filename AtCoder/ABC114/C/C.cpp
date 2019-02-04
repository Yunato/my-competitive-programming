#include <iostream>
#include <cmath>
using namespace std;

void addVal(int* digit, int index){
	switch(digit[index]){
		case 0:
			digit[index] = 3;
			break;
		case 3:
			digit[index] = 5;
			break;
		case 5:
			digit[index] = 7;
			break;
		case 7:
			digit[index] = 3;
			addVal(digit, ++index);
			break;
	}
}

bool checkVal(int* digit){
	bool isThree, isFive, isSeven;
	isThree = false;
	isFive = false;
	isSeven = false;
	for(int index = 0; index < 10; index++){
		switch(digit[index]){
			case 3:
				isThree = true;
				break;
			case 5:
				isFive = true;
				break;
			case 7:
				isSeven = true;
				break;
		}
	}
	return isThree && isFive && isSeven;
}

int countSmall(int num){
	int digit[10];
	digit[0] = 7;
	digit[1] = 5;
	digit[2] = 3;
	digit[3] = 0;
	digit[4] = 0;
	digit[5] = 0;
	digit[6] = 0;
	digit[7] = 0;
	digit[8] = 0;
	digit[9] = 0;
	long long val = digit[2]*100+digit[1]*10+digit[0];
	int count = 0;
	while(num >= val){
		count++;
		do{
			addVal(digit, 0);
		}while(!checkVal(digit));
		val = 0;
		for(int index = 0; index < 10; index++){
			val += digit[index] * pow(10, index);
		}
	}
	return count;
}

int main(void){
	long long N;
	cin >> N;
	cout << countSmall(N) << endl;
	return 0;
}
