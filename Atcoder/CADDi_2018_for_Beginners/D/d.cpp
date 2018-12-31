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
    vector<long long> a = vector<long long>(N, 0);
    for(int cnt = 0; cnt < N; cnt++){
        cin >> a[cnt];
    }
    bool trun = true;
    while(true){

        turn = !turn;
    }
    if(turn){
        cout << "first" << endl;
    }else{
        cout << "second" <<endl;
    }

    return 0;
}
