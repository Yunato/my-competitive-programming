#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
    int N;
    cin >> N;
    int sum = 0;
    int max = 0;
    for (int i = 0; i < N; ++i){
        int L;
        cin >> L;
        sum += L;
        if (max < L){
            max = L;
        }
    }
    if(sum-max > max){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}

