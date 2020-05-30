#pragma once
#include <sal.h>


class TransfromTime
{
public:

	void TransformMinuateToHour(_Out_ unsigned int& out_minuate, _Out_ unsigned int& out_hour, unsigned int minuate);

	void TransformSecToMinuate(_Out_ unsigned int & sec, _Out_ unsigned int & minuate, unsigned int Sec);
};

