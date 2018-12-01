# include <iostream>
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
		o_map[o_value] = 0;
		int o_value2, o_max2 = 0;
		for(auto itr = o_map.begin(); itr != o_map.end(); itr++){
			if(o_max2 < itr->second){
				o_value2 = itr->first;
				o_max2 = itr->second;
			}
		}

		e_map[e_value] = 0;
		int e_value2, e_max2 = 0;
		for(auto itr = e_map.begin(); itr != e_map.end(); itr++){
			if(e_max2 < itr->second){
				e_value2 = itr->first;
				e_max2 = itr->second;
			}
		}
		if(o_max2 < e_max2) e_max = e_max2;
		else o_max = o_max2;
	}
	
	result += n/2 - o_max;
	result += n/2 - e_max;

	cout << result << endl;
	return 0;
}
