#include<iostream>
using namespace std;
template<typename t2>

class Pair{
	t2 values[2];

public:
	Pair(t2 x,t2 y)
	{
		values[0]=x;
		values[1]=y;
	}

	t2 GetMax()
	{
	if(values[0]>values[1])
		return values[0];
	else
		return values[1]; 
     }
	t2 GetMin()
{  if(values[0]>values[1])
		return values[1];
	else
		return values[0]; ;
}

	friend ostream& operator<<(ostream& out, Pair obj)
	{
		cout<<obj.GetMax()<<endl;
		cout<<obj.GetMin()<<endl;

		return out;
	}




};







