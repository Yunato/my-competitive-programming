#include <iostream>
#include <string>
#include <cstdlib>
#include <map>
#include <vector>
using namespace std;

int main(void){
	int N;
	map<int, int> t_map;
	cin >> N;
	for(int cnt = 0; cnt < N; cnt++){
		int S, E;
		string str;
		cin >> str;
		string str_f = str.substr(0,4);
		string str_e = str.substr(5,4);
		S = (atoi(str_f.c_str())/ 5) * 5;
		E = (atoi(str_e.c_str()) / 5) * 5;
		if(atoi(str_e.c_str()) % 5 != 0) E+=5;
		if(E % 100 == 60) E += 40;
		if(E > 2400) E = 2400;
		t_map[S] = E;
	}

	int S = -1, E = -1;
	for(auto itr = t_map.begin(); itr != t_map.end(); itr++){
		if(itr->first <= E){
			if(itr->second > E) t_map[S] = E = itr->second;
			t_map.erase(itr);
			itr++;
		}else{
			S = itr->first;
			E = itr->second;
		}
	}
	
	string Sr, Er;
	for(auto itr = t_map.begin(); itr != t_map.end(); itr++){
		if(itr->first == 0) Sr = "0000";
		else if(itr->first < 1000) Sr = "0" + to_string(itr->first);
		else Sr = to_string(itr->first);
		if(itr->second == 0) Er = "0000";
		else if(itr->second < 1000) Er = "0" + to_string(itr->second);
		else Er = to_string(itr->second);

		cout << Sr << "-" << Er <<  endl;
	}
	return 0;
}
