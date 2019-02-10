#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
	long long K, A, B;
	cin >> K >> A >> B;
	long long sum = 1;
	if (A >= B - 2){
		sum = 1 + K;
	}else{
		int money = 0;
		while (K > 0){
			if (money >= 1){
				sum += B;
				money -= 1;
			} else if (sum >= A){
				sum -= A;
				money += 1;
			} else{
				sum++;
			}
			--K;
		}
		if (money != 0){
			sum += money * (A + 1);
		}
	}
	cout << sum << endl;
    return 0;
}
