# include <iostream>
using namespace std;

int main(void){
	int N;
	cin >> N;
	if(N == 1) cout << "Hello World" << endl;
	else if(N == 2){
		int A, B;
		cin >> A >> B;
		cout << A + B << endl;
	}
	return 0;
}
