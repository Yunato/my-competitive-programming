#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

class Pos{
public:
	int x;
	int y;
	Pos(int w, int h){
		x = w;
		y = h;
	}
};

int main(void){
	long long H, W, X;
	cin >> H >> W >> X;
	vector<vector<char>> map = vector<vector<char>>(H, vector<char>(W, '#'));
	vector<Pos> pos;
	for(int h = 0; h < H; h++){
		for(int w = 0; w < W; w++){
			cin >> map[h][w];
			if(map[h][w] == '@'){
				Pos p(w, h);
				pos.push_back(p);
			}
		}
	}
	for(int i = 0; i < pos.size(); i++){
		int y = pos[i].y;
		int x = pos[i].x;
		for(int cnt = 0; cnt < X; cnt++){
		}
	}
	
	return 0;
}
