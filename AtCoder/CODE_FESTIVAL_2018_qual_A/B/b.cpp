#include <iostream>
#include <vector>
using namespace std;

int main(void){
	int N, M, A, B, S = 0;
	cin >> N >> M >> A >> B;
	vector<int> L = vector<int>(M, 0);
	vector<int> R = vector<int>(M, 0);
	vector<bool> flag = vector<bool>(N, false);
	for(int cnt = 0; cnt < M; cnt++){
		cin >> L[cnt] >> R[cnt];
		for(int index = L[cnt] - 1; index <= R[cnt] - 1; index++){
			flag[index] = true;
		}
	}
	for(int cnt = 0; cnt < N; cnt++){
		if(flag[cnt])	S += A;
		else	S += B;
	}
	cout << S << endl;

	return 0;
}
