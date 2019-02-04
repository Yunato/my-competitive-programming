#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <cstdio>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

void addElement(vector<long long>& a, int *lindex, int *rindex, long long input, int* num){
	if(abs(a[*lindex] - input) >= abs(a[*rindex] - input)){
		*lindex -= 1;
		a[*lindex] = input;
	}else{
		*rindex += 1;
		a[*rindex] = input;
	}
	*num += 1;
}

int main(void){
	int N;
	cin >> N;
	multiset<long long> input;
	for(int cnt = 0; cnt < N; cnt++){
		int temp;
		cin >> temp;
		input.insert(temp);
	}

	int index = 0;
	vector<long long> A = vector<long long>(N, 0);
	for(auto itr = input.begin(); itr != input.end(); itr++){
		A[index++] = *itr;
	}


	int first_index = 1, last_index = 1, num = 0;
	vector<long long> B = vector<long long>(N + 5, 0);
	B[B.size()/2] = A[0];
	int half = B.size()/2;
	int lindex = half;
	num++;
	B[B.size()/2+1] = A[N-last_index];
	int rindex = half+1;
	last_index++;
	num++;
	if(N > 2){
		B[B.size()/2-1] = A[N-last_index];
		lindex = half-1;
		last_index++;
		num++;
	}
	while(N > 3){
		int add = A[first_index++];
		addElement(B, &lindex, &rindex, add, &num);
		if(num == N) break;
		add = A[first_index++];
		addElement(B, &lindex, &rindex, add, &num);
		if(num == N) break;
		add = A[A.size() - last_index];
		addElement(B, &lindex, &rindex, add, &num);
		last_index++;
		if(num == N) break;
		add = A[A.size() - last_index];
		addElement(B, &lindex, &rindex, add, &num);
		last_index++;
		if(num == N) break;
	}
	long long Sum = 0;
	for(int cnt = 0; cnt < B.size(); cnt++){
		if(B[cnt] == 0 || B[cnt+1] == 0) continue;
		Sum += abs(B[cnt] - B[cnt+1]);
	}
	cout << Sum << endl;
	return 0;
}
