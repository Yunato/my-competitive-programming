#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <map>
using namespace std;

int main(){
	int H, W;
	int count = 0;
	cin >> H >> W;
	map<pair<int ,int>, bool> odd;
	for(int h = 0; h < H; h++){
		for(int w = 0; w < W; w++){
			int a;
			cin >> a;
			if(a % 2 != 0){
				pair<int, int> buff;
				buff.first = h;
				buff.second = w;
				odd[buff] = false;
			}
		}
	}
	vector<string> result;
	int num = 0;
	int check;
	if(odd.size() % 2 == 0) check = 0;
	else check = 1;
	while(true){
		int count = 0;
		for(auto itr = odd.begin(); itr != odd.end(); ++itr){
			if(!itr->second){
				count++;
			}
			pair<int, int> a = itr->first;
			
			
		}
		if(count == check)
			break;
	}

	return 0;
}
