#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

bool checkNA(int num){
  return num == 0;
}

bool checkMonth(int num){
  return num < 13;
}

int main(void){
  int S;
  cin >> S;
  int a = S / 100;
  int b = S % 100;
  bool af, bf, an, bn;
  an = checkNA(a);
  bn = checkNA(b);
  af = checkMonth(a);
  bf = checkMonth(b);
  if((!af && !bf) || (an && bn) || (an && !bf) || (!af && bn)){
    cout << "NA" << endl;
  }else if((af && !bf) || (af && bn)){
    cout << "MMYY" << endl;
  }else if((!af && bf) || (an && bf)){
    cout << "YYMM" << endl;
  }else if(af && bf){
    cout << "AMBIGUOUS" << endl;
  }
  
  return 0;
}
