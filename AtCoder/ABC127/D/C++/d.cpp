#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(void){
  int N, M;
  cin >> N >> M;
  map<long long, int> A;
  for(int cnt = 0; cnt < N; ++cnt){
    long long a;
    cin >> a;    
    ++A[a];
  }

  for(int cnt = 0; cnt < M; ++cnt){
    int B, C;
    cin >> B >> C;
    A[C] += B;
  }

  long long offset = pow(10, 9);
  map<long long, int> Ans;
  for(auto itr = A.begin(); itr != A.end(); ++itr){
    Ans[offset - itr->first] = itr->second;
  }

  long long ans = 0;
  for(auto itr = Ans.begin(); itr != Ans.end(); ++itr){
    if(N > itr->second){
      ans += (offset - itr->first) * itr->second;
      N -= itr->second;
    }else{
      ans += (offset - itr->first) * N;
      break;
    }
  }
  cout << ans << endl;

  return 0;
}
