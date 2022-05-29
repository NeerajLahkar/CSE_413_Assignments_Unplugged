//NEERAJ LAHKAR
//CSE-21/20
#include<iostream>
using namespace std;

class Int{
	public:
	int num;
	Int(){
		num=0;
	}
	Int(int n){
		num=n;
	}
	Int add(Int x,Int y){
		Int e;
		e.num=x.num+y.num;
		return e;
	}	
};

int main(){
	int a,b;
	cout<<"Enter the two numbers:"<<"\n";
	cin>>a>>b;
	
	Int e1,e2;
	e1.num=a;
	e2.num=b;
	
	Int e3;
	e3=e3.add(e1,e2);
	
	cout<<"The sum of the two numbers is: "<<e3.num;
}
