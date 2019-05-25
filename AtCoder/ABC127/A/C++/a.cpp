#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
  int A, B;
  cin >> A >> B;
  int ans = 0;
  if(A >= 13){
    ans = B;
  }else if(A >= 6){
    ans = B/2;
  }else{
    ans = 0;
  }
  cout << ans << endl;
  return 0;
}
