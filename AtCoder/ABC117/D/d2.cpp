#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;
 
int main(void){
    long long N, K;
    cin >> N >> K;
    vector<long long> A = vector<long long>(N, 0);
    for(int cnt = 0; cnt < N; ++cnt){
        cin >> A[cnt];
    }
    int max = 0;
    for(int x = 0; x <= K; ++x){
        int result = 0;
        for(int cnt = 0; cnt < N; ++cnt){
            result += x^A[cnt];
        }
        if(max < result){
            cout << "X " << x << endl;
            max = result;
        }
    }
    cout << max << endl;
    return 0;
}
