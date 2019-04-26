#pragma once
#include <iostream>
#include <Windows.h>
#include <time.h>
#include <cstdlib>
using namespace std;





class Weather {
public:
	Weather() { 
		/*M_Weather = new Weather;*/
		srand(time(nullptr));
		weather = rand() % 5;
		fineDust = rand() % 5; 
	}
	~Weather() {
		/*delete M_Weather;
		M_Weather = nullptr;*/
	}

	void Print();


private:
	int weather;
	int fineDust;
	Weather* M_Weather = nullptr;

enum DUST
{
	VERYBAD,
	BAD,
	SOSO,
	GOOD,
	FANTASTIC,
};

enum  WEATHER
{
	SUN,
	CLOUD,
	RAIN,
	SNOW,
	FOG,
};

};