#include<iostream>
using namespace std;
 

//template<typename t>
//
//t GetMax(t x){
//	if(x>y)
//		return x;
//	else
//		return y; 
//}
//
//
//
//template<typename s>
//s GetMin(s x)
//{  if(x>y)
//		return y;
//	else
//		return x;
//}
//int main () 
//{
//  int i=5, j=6, k;
//  long l=10, m=5, n;
//  k=GetMax<int>(i,j);
//  n=GetMin<long>(l,m);
//  cout << k << endl;
//  cout << n << endl;
//  return 0;
//}

//template<typename t, typename t1>
//
//t GetMax(t x, t1 y){
//	if(x>y)
//		return x;
//	else
//		return y; 
//}
//
//
//
//template<typename s,typename s1>
//s GetMin(s x, s1 y)
//{  if(x>y)
//		return y;
//	else
//		return x;
//}
//
//int main () 
//{
//
//   char i='Z';
//  int  j=6, k;
//  long l=10, m=5, n;
//  k=GetMax(i,m);
//  n=GetMin(j,l);
//  cout << k << endl;
//  cout << n << endl;
//  return 0;
//
// 
// 
//}









#include"pair.h"

int main () 
{
  Pair <double> myobject (1.012, 1.01234);
	cout<<myobject.GetMax()<<endl;
  cout<<myobject.GetMin()<<endl;
	cout<<myobject<<endl; // << operator in pairs should be overloaded (inline)
  return 0;
}
 




