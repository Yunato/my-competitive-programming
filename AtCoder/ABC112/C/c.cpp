# include <iostream>
# include <vector>
# include <cmath>
using namespace std;

long long max(long long a, long long b){
	if(a > b)
		return a;
	else
		return b;
}

int main(void){
	long long N;
	cin >> N;
	vector<long long> x = vector<long long>(N, 0);
	vector<long long> y = vector<long long>(N, 0);
	vector<long long> h = vector<long long>(N, 0);
	long long lx, ly, lh = 0;
	for(long long index = 0; index < N; index++){
		cin >> x[index] >> y[index] >> h[index];
		if(lh < h[index]){
			lx = x[index];
			ly = y[index];
			lh = h[index];
		}
	}
	long long rx, ry;
	long long rH = 0;
	for(long long Cx = 0; Cx < 101; Cx++){
		for(long long Cy = 0; Cy < 101; Cy++){
			long long CH = h[0] + (long long)abs(x[0] - Cx) + (long long)abs(y[0] - Cy);
			if(CH < 1) continue;
			bool loop = true;
			for(int index = 0; index < N; index++){
				if(h[index] != max(CH - (long long)abs(x[index] - Cx) - (long long)abs(y[index] - Cy), 0) && (CH != h[index] + (long long)abs(x[index] - Cx) + (long long)abs(y[index] - Cy))){
					loop = false;
					break;
				}
			}
			if(rH < CH && loop){
				rx = Cx;
				ry = Cy;
				rH = CH;
			}
		}
	}
	cout << rx << " " << ry << " " << rH << endl;
	return 0;
}
