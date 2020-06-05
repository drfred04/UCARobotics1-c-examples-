#include "math.h"

using namespace std;
int main()
{
	math obj;
	obj.a = 43;
	obj.b = 55;
	int result1 = obj.compute(obj.a,obj.b);
	int result2 = obj.subtract(obj.a,obj.b);
	cout<<"A = "<<obj.a<<endl;
	cout<<"B = "<<obj.b<<endl;
	cout<<"A + B = "<<result1<<endl;
	cout<<"A - B = "<<result2<<endl;
	return 0;
}
