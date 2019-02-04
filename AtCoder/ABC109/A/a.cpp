#include <iostream>
using namespace std;

int main(){
	int A, B;
	cin >> A >> B;
	if(A*B%2 == 0){
		cout << "No";
	}else{
		cout << "Yes";
	}
	return 0;
}
