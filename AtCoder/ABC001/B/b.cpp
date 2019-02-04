#include <iostream>
using namespace std;

// Question < https://abc001.contest.atcoder.jp/tasks/abc001_2 >

int main(void){
	double m;
	int result = 0;
	cin >> m;
	m /= 1000;
	if(m < 0.1) result = (int)0;
	else if(m <= 5) result = (int)(m * 10);
	else if(m <= 30) result = (int)(m + 50);
	else if(m <= 70) result = (int)((m - 30) / 5 + 80);
	else result = 89;

	if(result / 10 < 1) cout << "0" << result << endl;
	else cout << result << endl;
	return 0;
}
