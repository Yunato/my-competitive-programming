#include <iostream>
#include <utility>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
    long long K, N;
    cin >> N >> K;
    vector<pair<int, int> > pairs(N);
    long long kind = 0;
    for(int cnt = 0; cnt < N; cnt++){
        long long t, d;
        cin >> t >> d;
        pairs[cnt] = make_pair(d, t);
        kind = t;
    }
    sort(pairs.begin(), pairs.end());

    long long temp;
    if(kind > K){
        temp = pow(K, 2);
    }else{
        temp = pow(kind, 2);
    }
    if(tmep > paris[0].first){
        result = temp;
        for(int cnt = 0; cnt < K; cnt++){
        }
    }else{
        for(int cnt = 0; cnt < N; cnt++){
        }
    }
    for(int cnt = 0; cnt < N; cnt++){
        cout << pairs[cnt].first << " " << pairs[cnt].second << endl;
    }
    


    return 0;
}

