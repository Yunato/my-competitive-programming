#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
    long long N, K;
    cin >> N >> K;
    vector<long long> A = vector<long long>(N, 0);
    long long max = 0;
    for(int cnt = 0; cnt < N; ++cnt){
        int x;
        cin >> A[cnt];
        if (max < A[cnt]){
            max = A[cnt];
        }
    }
    long long ex = K == 0 ? 0 : log2(K);
    cout << "ex " << ex << endl;
    vector<long long> B = vector<long long>(N, 0);
    int std = pow(2, ex + 1) - 1;
    for(int cnt = 0; cnt < N; ++cnt){
        B[cnt] = std - A[cnt];
        cout << B[cnt] << endl;
    }
    vector<long long> digit = vector<long long>(ex + 1, 0);
    for(int d = ex; d >= 0; --d){
        long long p = pow(2, d);
        for(int cnt = 0; cnt < N; ++cnt){
            cout << B[cnt] << " >= " << p << endl;
            if(B[cnt] >= p){
                B[cnt] -= p;
                digit[d] += 1;
            }
        }
    }
    int X = 0;
    for (int cnt = 0; cnt < ex + 1; ++cnt){
        cout << cnt << " " << digit[cnt] << endl;
        if (N / 2 < digit[cnt]){
            X += (1 << cnt);
        }
    }
    long long result = 0;
    for (int cnt = 0; cnt < N; cnt++){
        result += A[cnt] ^ X;
    }
    cout << result << endl;
    return 0;
}
