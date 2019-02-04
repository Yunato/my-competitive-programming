#include <iostream>
using namespace std;

int main(){
	int N, K, result = 0;
	cin >> N >> K;
	int x, a, b, c;
	for(x = N; x > 0; x--){
		for(int y = N; y > 0; y--){
			if((x + y) % K != 0)continue;
			for(int z = N; z > 0; z--){
				if((y + z) % K == 0 && (z + x) % K == 0){
					a = x;
					b = y;
					c = z;
					x = 0;
					y = 0;
					z = 0;
					break;
				}
			}
		}
	}
	for(int x = a; x > 0; x-=K){
		for(int y = b; y > 0; y-=K){
			for(int z = c; z > 0; z-=K){
				if(x == y && y == z)continue;
				cout << x << " " << y << " " << z << endl;
				result++;
			}
		}
	}
	for(int a = 1; a <= N; a++){
		if((a * 2) % K == 0){
			cout << a << endl;
			result++;
		}
	}
	cout << result;
	return 0;
}
