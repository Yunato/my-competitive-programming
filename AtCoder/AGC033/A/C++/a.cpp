#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
  int H, W;
  cin >> H >> W;
  int total = H * W;
  vector<vector<int> > A(H+2, vector<int>(W+2, -1));
  queue<pair<int, int> > q;
  H++;
  W++;
  for(int h = 1; h < H; ++h){
    for(int w = 1; w < W; ++w){
      char a;
      cin >> a;
      if(a == '#'){
        A[h][w] = 0;
        pair<int, int> tmp = make_pair(h, w);
        q.push(tmp);
        --total;
      }
    }
  }
  int count = 1;
  while(q.size() != 0){
    pair<int, int> tmp = q.front();
    q.pop();
    int h = tmp.first;
    int w = tmp.second;
    if(A[h-1][w]==-1) {
      A[h-1][w] = A[h][w] + 1;
      if(h!=1){
        pair<int, int> hoge = make_pair(h-1, w);
        q.push(hoge);
      }
    }
    if(A[h][w-1]==-1) {
      A[h][w - 1] = A[h][w] + 1;
      if(w!=1){
        pair<int, int> hoge = make_pair(h, w-1);
        q.push(hoge);
      }
    }
    if(A[h+1][w]==-1) { 
      A[h+1][w] = A[h][w] + 1;
      if(h!=H-1){
        pair<int, int> hoge = make_pair(h+1, w);
        q.push(hoge);
      } 
    }
    if(A[h][w+1]==-1) { 
      A[h][w + 1] = A[h][w] + 1;
      if(w!=W-1){
        pair<int, int> hoge = make_pair(h, w+1);
        q.push(hoge);
      }
    }
    count = A[h][w];
  }
  cout << count << endl;
  return 0;
}
