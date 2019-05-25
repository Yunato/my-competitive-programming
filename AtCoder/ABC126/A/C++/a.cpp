#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
  int N, K;
  string S;
  cin >> N >> K;
  cin >> S;
  for(int index = 0; index < S.size(); ++index){
    if(index == K - 1){
      if(S[index] == 'A') cout << 'a';
      if(S[index] == 'B') cout << 'b';
      if(S[index] == 'C') cout << 'c';
    }else{
      cout << S[index];
    }
  }
  cout << endl;

  return 0;
}
