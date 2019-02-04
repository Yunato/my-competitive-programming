#include <iostream>
using namespace std;

int main(void){
	int A, B, C, S;
	cin >> A >> B >> C >> S;
	if(S >= (A + B + C) && S  <= (A + B + C + 3)) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
