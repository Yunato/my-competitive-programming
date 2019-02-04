# include <iostream>
# include <iomanip>
# include <cmath>
# include <vector>
using namespace std;

// Question < https://abc002.contest.atcoder.jp/tasks/abc002_3 >

int main(void){
	double a, b, c, d, s, S;
	vector<vector<int>> point = vector<vector<int>>(3, vector<int>(2, 0));
	for(int cnt = 0; cnt < 3; cnt++){
		cin >> point[cnt][0] >> point[cnt][1];
	}
	// Heron's formula
	// a = sqrt(pow(point[0][0] - point[1][0], 2) + pow(point[0][1] - point[1][1], 2));
	// b = sqrt(pow(point[1][0] - point[2][0], 2) + pow(point[1][1] - point[2][1], 2));
	// c = sqrt(pow(point[2][0] - point[0][0], 2) + pow(point[2][1] - point[0][1], 2));
	// s = (a + b + c) / 2.0;
	// S = sqrt(s * (s - a) * (s - b) * (s - c)); 

	a = point[1][0] - point[0][0];
	b = point[1][1] - point[0][1];
	c = point[2][0] - point[0][0];
	d = point[2][1] - point[0][1];
	S = abs(a * d - b * c)/ 2.0;
	cout << fixed << setprecision(2) << S << endl;

	return 0;
}
