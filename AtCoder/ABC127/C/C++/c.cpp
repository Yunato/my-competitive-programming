#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
  int n, m;
  cin >> n >> m;
  int max = n + 100;
  int min = 0;
  for(int cnt = 0; cnt < m; ++cnt){
    int l, r;
    cin >> l >> r;
    if(min < l){
      min = l;
    }
    if(r < max){
      max = r;
    }
  }
  int ans = max - min + 1;
  if(ans > n) ans = n;
  if(ans < 0) ans = 0;
  cout << ans << endl;

  return 0;
}
