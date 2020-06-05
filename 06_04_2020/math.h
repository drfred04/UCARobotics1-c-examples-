#include <iostream>
#include "add.h"
#include "diff.h"


class math: public add, public diff
{
public:
	int a;
	int b;


};
