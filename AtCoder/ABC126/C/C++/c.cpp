#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main(void){
  long long int N, K;
  cin >> N >> K;
  double ans = 0.0;
  for(int cnt = 1; cnt < N + 1; ++cnt){
    double c = 1.0 / N;
    long long int now = cnt;
    while(now < K){
      now *= 2;
      c /= 2.0;
    }
    ans += c;
  }
  cout << ans << endl;
  return 0;
}
