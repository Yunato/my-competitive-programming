#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
  int r, D, x;
  cin >> r >> D >> x;
  for(int i = 2000; i < 2010; ++i){
    cout << r * x - D << endl;
    x = r * x - D;  
  }
  return 0;
}
