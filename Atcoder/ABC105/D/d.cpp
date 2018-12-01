#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main(){
	double box, child, input, result = 0;
	double sum = 0;
	cin >> box >> child;
	vector<int> content;
	for(int i = 0; i < box; i++){
		cin >> input;
		content.push_back(input);
		cout << input;
	}
	for(int i = 0; i < box; i++){
		sum = 0;
		for(int j = i; j < box; j++){
			sum += content[j];
			if(fmod(sum, child) == 0){
				result++;
			}
		}
	}
	cout << result;

	return 0;
}
