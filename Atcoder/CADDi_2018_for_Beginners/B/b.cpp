#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
    int N;
    long long H, W;
    cin >> N >> H >> W;
    int answer = 0;
    for(int cnt = 0; cnt < N; cnt++){
        long long A, B;
        cin >> A >> B;
        if( A >= H && B >= W){
            answer++;
        }
    }
    cout << answer << endl;

    return 0;
}


