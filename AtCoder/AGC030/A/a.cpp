#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
    long long A, B, C;
    cin >> A >> B >> C;
    long long answer = 0;
    answer += 2 * B;
    C -= B;
    B = 0;
    if(A < C){
        answer += A + 1;
    }else{
        answer += C;
    }
    cout << answer << endl;

    return 0;
}
