#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

struct City{
	int index;
	int prefecture;
	long long year;
	int num;

	City(int input_index, int input_prefecture, long long input_year){
		index = input_index;
		prefecture = input_prefecture;
		year = input_year;
	}

	int getPrefecture(){
		return prefecture;
	}
	
	void setNum(int input_num) {
		num = input_num;
	}

	void print(){
		cout << setfill('0') << setw(6) << prefecture;
		cout << setfill('0') << setw(6) << num << endl;
	}
};

bool cmpPrefecture(const City &a, const City &b){
	return a.prefecture < b.prefecture;
}

bool cmpYear(const City &a, const City &b){
	return a.year < b.year;
}

bool cmpIndex(const City &a, const City &b){
	return a.index < b.index;
}

int main(void){
	int N, M;
	cin >> N >> M;
	vector<City> city;
	for(int index=0; index < M; index++){
		int P;
		long long Y;
		cin >> P >> Y;
		city.push_back(City(index, P, Y));
	}
	stable_sort(city.begin(), city.end(), cmpYear);
	stable_sort(city.begin(), city.end(), cmpPrefecture);
	int tmp = -1, count = 1;
	for(int index = 0; index < M; index++){
		if(tmp != city[index].getPrefecture()){
			tmp = city[index].getPrefecture();
			count = 1;
		}
		city[index].setNum(count++);
	}
	stable_sort(city.begin(), city.end(), cmpIndex);
	for (City itr : city){
		itr.print();
	}
	return 0;
}
