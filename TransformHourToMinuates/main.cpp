#include <stdio.h>
#include "TransfromTime.h"
#pragma warning(disable: 4996)
int main()
{
	TransfromTime transTime;

	

	unsigned int sec = 150;
	unsigned int min = 0;
	unsigned int remainsec = 0;
	transTime.TransformSecToMinuate(min, remainsec, sec);
	printf("%d�� %d��\n", min, remainsec);

	unsigned int minuate = 210;
	unsigned int hour = 0;
	unsigned int remainmin = 0;

	transTime.TransformMinuateToHour(remainmin, hour, minuate);

	printf("%d�ð� %d��", hour, remainmin);

	return 0;
}