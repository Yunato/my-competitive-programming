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
  vector<string> s(N, "");
  long long ans = 0;
  long long cnta = 0;
  long long cntb = 0;
  for(int cnt = 0; cnt < N; ++cnt){
    cin >> s[cnt];
    for(int index = 0; index < s[cnt].size() - 1; ++index){
      if(s[cnt][index] == 'A' && s[cnt][index + 1] == 'B'){
        ++ans;
        ++index;
      }
    }
    if(s[cnt][0] == 'B'){
      ++cntb;
    }
    if(s[cnt][s[cnt].size() - 1] == 'A'){
      ++cnta;
    }
  }
  cout << ans + min(cnta, cntb) << endl;
  return 0;
}
