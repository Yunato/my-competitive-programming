# include <iostream>
# include <vector>
# include <map>
using namespace std;

int main(void){
	int n, result = 0;
	cin >> n;
	map<int, int> o_map;
	map<int, int> e_map;
	for(int index = 0; index < n; index++){
		int v;
		cin >> v;
		if(index % 2 == 0)
			e_map[v]++;
		else
			o_map[v]++;
	}

	int o_value, o_max = 0;
	for(auto itr = o_map.begin(); itr != o_map.end(); itr++){
		if(o_max < itr->second){
			o_value = itr->first;
			o_max = itr->second;
		}
	}

	int e_value, e_max = 0;
	for(auto itr = e_map.begin(); itr != e_map.end(); itr++){
		if(e_max < itr->second){
			e_value = itr->first;
			e_max = itr->second;
		}
	}

	if(e_value == o_value){
		if(e_max < o_max){
			o_map[o_value] = 0;
			o_max = 0;
			for(auto itr = o_map.begin(); itr != o_map.end(); itr++){
				if(o_max < itr->second){
					o_value = itr->first;
					o_max = itr->second;
				}
			}
		}else{
			e_map[e_value] = 0;
			e_max = 0;
			for(auto itr = e_map.begin(); itr != e_map.end(); itr++){
				if(e_max < itr->second){
					e_value = itr->first;
					e_max = itr->second;
				}
			}
		}
	}
	
	result += n/2 - o_max;
	result += n/2 - e_max;

	cout << result << endl;
	return 0;
}
