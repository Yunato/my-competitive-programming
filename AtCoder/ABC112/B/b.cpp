# include <iostream>
# include <vector>
using namespace std;

int main(void){
	int N, T;
	cin >> N >> T;
	int rc = 1001;
	for(int i = 0; i < N ; i++){
		int c, t;
		cin >> c >> t;
		if(T >= t && rc > c){
			rc = c;
		}
	}
	if(rc != 1001)	cout << rc << endl;
	else cout << "TLE" << endl;
	return 0;

}
