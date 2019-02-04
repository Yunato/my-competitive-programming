#include <iostream>
using namespace std;

int main(){
	int num;
	cin >> num;
	if(num <= 0) {
		cout << 0;
		return 0;
	}
	if(num % 2 == 0)
		num--;
	if(num < 105){
		cout << 0;
	}else if(num == 105){
		cout << 1;
	}else{
		int result = 1;
		int k;
		for(int i = 107; i <= num; i+=2){
			int count = 0;
			for(int j = 1; j <= i; j+=2){
				if(i % j == 0){
					count++;
				}
				if(count > 8){
					break;
				}
			}
			if(count == 8)result++;
		}
		cout << result;
	}
	return 0;
}
