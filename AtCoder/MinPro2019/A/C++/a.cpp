#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
	int N, K;
	cin >> N >> K;
	int M = N / 2;
	N - M >= K ? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}
