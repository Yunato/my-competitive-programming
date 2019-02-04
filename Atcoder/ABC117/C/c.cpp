#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
    long long N, M;
    cin >> N >> M;
    vector<long long> X = vector<long long>(M, 0);
    for (int cnt = 0; cnt < M; ++cnt){
        cin >> X[cnt];
    }
    sort(X.begin(), X.end());

    vector<long long> diff = vector<long long>(M - 1, 0);
    for (int cnt = 0; cnt < M - 1; ++cnt){
        diff[cnt] = X[cnt + 1] - X[cnt];
    }
    sort(diff.begin(), diff.end());
    int result = 0;
    for (int cnt = 0; cnt < M - N; ++cnt){
        result += diff[cnt];
    }
    cout << result << endl;
    return 0;
}

