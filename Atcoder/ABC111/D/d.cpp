# include  <iostream>
# include  <map>
using namespace std;

struct Point{
	int x;
	int y;
};

int main(void){
	int N;
	cin >> N;
	map<int, int> dist_cnt_map;
	map<Point, int> point_dist_map;
	for(int index = 0; index < N; index++){
		Point p;
		cin >> p.x >> p.y;
		int X = p.x, Y = p.y;
		if(p.x < 0) X *= -1;
		if(p.y < 0) Y *= -1;
		//point_dist_map[p] = X + Y;
		dist_cnt_map[X + Y]++;
	}
	cout << endl;
	for(auto itr = dist_cnt_map.begin(); itr != dist_cnt_map.end(); itr++)
		cout << itr->first << " " << itr->second << endl;
		

	return 0;
}
