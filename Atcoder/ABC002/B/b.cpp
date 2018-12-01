# include <iostream>
# include <string>
using namespace std;

// Question < https://abc002.contest.atcoder.jp/tasks/abc002_2 >

int main(void){
	string W, R = "";
	cin >> W;
	for(int index = 0; index < W.size(); index++){
		char c = W[index];
		if(c != 'a' && c != 'i' && c != 'u' && c != 'e' && c != 'o')
			R += c;
	}
	cout << R << endl;
	
	return 0;
}
