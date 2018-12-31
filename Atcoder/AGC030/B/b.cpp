#include <iostream>
#include <vector>
#include <cmath>
#include <map>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

long long L, N;
vector<long long> X; 

long long inspectMaxLen(long long current, int first, int end){
    if(first > end){
        return 0;
    }
    long long rLen, lLen;
    if(X[end] < current){
        rLen = L - current + X[first];
        lLen = current - X[end];
    }else{
        rLen = X[first] - current;
        lLen = L - X[end] + current;
    }
        long long newCurrent = X[first];
        int newFirst = first+1;
        long long r = rLen + inspectMaxLen(newCurrent, newFirst, end);
        newCurrent = X[end];
        int newEnd = end-1;
        long long l = lLen + inspectMaxLen(newCurrent, first, newEnd);
        if(r > l){
            return r;
        }else{
            return l;
        }
}

int main(void){
    cin >> L >> N;
    X = vector<long long>(N, 0);
    for(int cnt = 0; cnt < N; cnt++){
        long long x;
        cin >> x;
        X[cnt] =  x;
    }
    int first = 0, end = N - 1;
    cout << inspectMaxLen(0, first, end) << endl;

    return 0;
}
