#include <iostream>
#include <vector>
using namespace std;

int main(void){
	int N, M, X, Y;
	int lx = -101, sy = 101;
	cin >> N >> M >> X >> Y;
	vector<int> x = vector<int>(N, 0);
	vector<int> y = vector<int>(M, 0);
	for(int cnt = 0; cnt < N; cnt++){
		cin >> x[cnt];
		if(lx < x[cnt]) lx = x[cnt];

	}
	for(int cnt = 0; cnt < M; cnt++){
		cin >> y[cnt];
		if(sy > y[cnt]) sy = y[cnt];
	}
	if(lx < sy &&  X < sy && Y > lx ) cout << "No War" << endl;
	else cout << "War" << endl;

	return 0;
}
