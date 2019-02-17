#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

vector<int> num = {1000, 2, 5, 5, 4, 5, 6, 3, 7, 6};
int N, M;
vector<int> A;
vector<char> result;

bool selectDigit(){
	if(N == 0){
		return true;
	}
	for(int index = 0; index < A.size(); ++index){
		if(N >= num[A[index]]){
			N -= num[A[index]];	
			result.push_back('0' + A[index]);
			if(selectDigit()){
				return true;
			}else{
				result.erase(result.begin() + result.size() - 1);
				N += num[A[index]];
			}
		}else{
			return false;
		}
	}
	return false;
}

int main(void){

	cin >> N >> M;
	for(int cnt = 0; cnt < M; ++cnt){
		int a;
		cin >> a;
		if(A.size() == 0){
			A.push_back(a);
			continue;
		}
		bool continueFlag = false;
		for(int index = 0; index < A.size(); ++index){
			if(num[A[index]] == num[a] && A[index] < a){
				A[index] = a;
				continueFlag = true;
				break;
			}
			if(num[A[index]] > num[a]){
				A.push_back(0);
				for(int count = A.size() - 1; count > index; --count){
					A[count] = A[count-1];
				}
				A[index] = a;
				continueFlag = true;
				break;
			}	
		}
		if(continueFlag){
			continue;
		}
		A.push_back(a);
	}
	
	selectDigit();
	sort(result.begin(), result.end(), greater<char>());
	for(char a : result){
		cout << a;
	}
	cout << endl;
    return 0;
}
