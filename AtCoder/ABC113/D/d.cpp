#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int H, W, K;

void counter(vector<vector<bool>> &pass, int h, int w, long long &count){
	if(h == H){
		if(w+1 == K){
			count++;
		}
		return;
	}
	if(w != W - 1){
		counter(pass, h+1, w+1, count);
	}
	if(w != 0){
		counter(pass, h+1, w-1, count);
	}
	counter(pass, h+1, w, count);	
}

int main(void){
	cin >> H >> W >> K;
	W -= 1;
	vector<vector<bool>> pass = vector<vector<bool>>(H, vector<bool>(W, false));
	long long count = 0;
	counter(pass, 0, 0, count);
	cout << count << endl;
	return 0;
}
