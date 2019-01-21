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
    vector<int> h = vector<int>(N, 0);
    for(int cnt = 0; cnt < N; cnt++){
        cin >> h[cnt];
    }
    int result = 0;
    int count = 1;
    while(count < 101){
        bool once = false;
        bool continuous = false;
        for(int cnt = 0; cnt < N; cnt++){
            if(h[cnt] >= count){
                continuous = true;
                once = true;
            }else{
                if(continuous){
                    result++;
                }
                continuous = false;
            }
        }
        if(!once){
            break;
        }else if(continuous){
            result++;
        }
        count++;
    }
    cout << result << endl;

    return 0;
}

