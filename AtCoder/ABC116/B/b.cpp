#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
    int s;
    cin >> s;
    map<int, int> a;
    int count = 0;
    while(true){
        count++;
        if(a[s] != 0){
            break;
        }
        a[s] = 1;
        if(s % 2 == 0){
            s /= 2;
        }else{
            s = 3 * s + 1;
        }
    }
    cout << count << endl;
    return 0;
}

