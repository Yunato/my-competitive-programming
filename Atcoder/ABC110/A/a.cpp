#include <iostream>
using namespace std;

int main(void){
	int input[3];
	cin >> input[0] >> input[1] >> input[2];
	for(int index = 0; index < 3; index++){
		for(int cnt = index + 1; cnt < 3; cnt++){
			if(input[cnt - 1] > input[cnt]){
				int temp = input[cnt- 1];
				input[cnt- 1] = input[cnt];
				input[cnt] = temp;
			}
		}

	}
	cout << input[2] * 10 + input[1] + input[0] << endl;
	return 0;
}
