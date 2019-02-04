#include <iostream>
using namespace std;

// Question < https://abc001.contest.atcoder.jp/tasks/abc001_3 >

int main(void){
	double Deg, Dis;
	int Dir, W;
	cin >> Deg >> Dis;

	double spd = Dis / 60.0;
	spd *= 10;
	if(spd - (double)(int)spd < 0.5) spd = (double)(int)spd;
	else spd = (double)(int)(spd + 0.9);
	spd /= 10;
	if(0.0 <= spd && spd <= 0.2) W = 0;
	else if(spd <= 1.5) W = 1;
	else if(spd <= 3.3) W = 2;
	else if(spd <= 5.4) W = 3;
	else if(spd <= 7.9) W = 4;
	else if(spd <= 10.7) W = 5;
	else if(spd <= 13.8) W = 6;
	else if(spd <= 17.1) W = 7;
	else if(spd <= 20.7) W = 8;
	else if(spd <= 24.4) W = 9;
	else if(spd <= 28.4) W = 10;
	else if(spd <= 32.6) W = 11;
	else if(spd >= 32.7) W = 12;

	Deg += 112.5;
	Dir = (int)(Deg / 225);
	if(W == 0.0) cout << "C";
	else{
		switch(Dir){
			case 0:
				cout << "N";
				break;
			case 1:
				cout << "NNE";
				break;
			case 2:
				cout << "NE";
				break;
			case 3:
				cout << "ENE";
				break;
			case 4:
				cout << "E";
				break;
			case 5:
				cout << "ESE";
				break;
			case 6:
				cout << "SE";
				break;
			case 7:
				cout << "SSE";
				break;
			case 8:
				cout << "S";
				break;
			case 9:
				cout << "SSW";
				break;
			case 10:
				cout << "SW";
				break;
			case 11:
				cout << "WSW";
				break;
			case 12:
				cout << "W";
				break;
			case 13:
				cout << "WNW";
				break;
			case 14:
				cout << "NW";
				break;
			case 15:
				cout << "NNW";
				break;
			case 16:
				cout << "N";
				break;
		}
	}
	cout << " " << W << endl;
	return 0;
}
