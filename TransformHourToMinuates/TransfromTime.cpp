#include "TransfromTime.h"

void TransfromTime::TransformMinuateToHour(_Out_ unsigned int& out_minuate, _Out_ unsigned int& out_hour, unsigned int minuate)
{
	unsigned int hour = (minuate / 60);
	unsigned int remainMin = (minuate % 60);

	out_minuate = remainMin;
	out_hour = hour;
}

void TransfromTime::TransformSecToMinuate(_Out_ unsigned int & out_sec, _Out_ unsigned int & out_minuate ,unsigned int Sec)
{
	unsigned int min = (Sec / 60);
	unsigned int remainSec = (Sec % 60);

	out_sec = min;
	out_minuate = remainSec;
}
