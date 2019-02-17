#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
	int A, B;
	cin >> A >> B;
	int result = B % A == 0 ? A + B : B - A;
	cout << result << endl;
    return 0;
}
