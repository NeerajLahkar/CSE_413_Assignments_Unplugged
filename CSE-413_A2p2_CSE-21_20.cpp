//NEERAJ LAHKAR
//CSE-21/20
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float i;
	cout<<"\nTABLE FOR Y = EXP[-X]\n";
	cout<<"X\t";
	for(i=0.1;i<1.0;i=i+0.1)
	{
		cout<<i<<"\t";
	}
	cout<<endl;
	float vals[10] = { 0.0f, 1.0f, 2.0f,3.0f,4.0f,5.0f,6.0f,7.0f,8.0f,9.0f};
	cout << setprecision(1)<<fixed;
	for(int i=0; i < 10; i++)
	cout << vals[i]<<endl;
	return 0;
}
