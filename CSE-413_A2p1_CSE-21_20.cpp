//NEERAJ LAHKAR
//CSE-21/20

#include<iostream>
#include<math.h>

using namespace std;
int main()
{
float v,n,p=1000,r=0.10;									//initialization of the required values
cout<<"\t"<<"n"<<"\t"<<"r"<<"\t"<<"p"<<"\t"<<"v"<<endl;		//The first line of the table: n r p v
for(int n=1;n<11;n++)
{
	v=p*pow(1+r,n);											//the required value of v is calculated
	cout<<"\t"<<n<<"\t"<<r<<"\t"<<p<<"\t"<<v<<endl;			//printing the values of n r p v
        p=p+1000;											//p is incremented by 1000
        r=r+0.02;											//r is incremented by 0.02
}

return 0;
}
