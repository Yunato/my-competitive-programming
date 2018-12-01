#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	int N;
	bool flag = false;
	cin >> N;
	vector<string> W = vector<string>(N, "");
	for(int cnt = 0; cnt < N ; cnt++){
		cin >> W[cnt];
	}
	for(int cnt = 1; cnt < N ; cnt++){
		if(W[cnt][0] != W[cnt - 1][W[cnt - 1].length() - 1]){
			flag = true;
			break;
		}
		for(int check = 0; check < cnt ; check++){
			if(W[check] == W[cnt]){
				flag = true;
				break;
			}
		}
	}
	if(!flag) cout << "Yes";
	else cout << "No";

	return 0;
}
