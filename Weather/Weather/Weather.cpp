#include "Weather.h"
void Weather::Print()
{
	cout << "³¯¾¾´Â : ";
	if (weather ==SUN)
	{
		cout << "ÇÞºûÂ¸Â¸" << endl;
	}
	else if (weather ==CLOUD)
	{
		cout << "Èå¸²" << endl;
	}
	else if (weather == RAIN)
	{
		cout << "ºñ¿È" << endl;
	}
	else if (weather ==SNOW)
	{
		cout << "´«¿È" << endl;
	}
	else if (weather == FOG)
	{
		cout << "¾È°³³¦" << endl;
	}

	cout << "¹Ì¼¼¸ÕÁö ¼öÄ¡ : ";
	if (fineDust ==VERYBAD)
	{
		cout << "¸Å¿ì ³ª»Ý" << endl;
	}
	else if (fineDust == BAD)
	{
		cout << "³ª»Ý" << endl;
	}
	else if (fineDust ==SOSO)
	{
		cout << "º¸Åë" << endl;
	}
	else if (fineDust ==GOOD)
	{
		cout << "ÁÁÀ½" << endl;
	}
	else if (fineDust == FANTASTIC)
	{
		cout << "¸Å¿ì ÁÁÀ½" << endl;
	}
}


