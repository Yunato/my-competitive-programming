# include <iostream>
# include <string>
using namespace std;

int main(void){
	string n;
	cin >> n;
	for(int index = 0; index < n.size(); index++){
		if(n[index] == '1') cout << '9';
		if(n[index] == '9') cout << '1';
	}
	cout << endl;
	return 0;
}
