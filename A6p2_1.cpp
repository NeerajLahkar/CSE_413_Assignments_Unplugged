#include<iostream>
using namespace std;

class Float{
	float *num1;
	int num2;
	public:
		Float(){}
		Float(int x){num2=x;num1= new float[num2];}
		friend void operator>>(istream &put, Float &f);
		Float operator++();
		float& operator[](int);
		friend void operator<<(ostream &pri, Float &f);
};

void operator>>(istream &put, Float &f){
	cout<<"Enter:"<<"\n";
	for(int i=0;i<f.num2;i++){
		put>>f.num1[i];
	}
}

Float Float::operator++(){
	for(int i=0;i<num2;i++){
		num1[i]=num1[i]+1;
		return *this;
	}
}

float& Float::operator[](int a){
	
		return num1[a];
	
}

void operator<<(ostream &pri, Float &f){
	for(int i=0;i<f.num2;i++){
		pri<<f.num1[i]<<"\n";
	}
}

int main(){
	Float a(10),b;
	cin>>a;
	b=++a;
	cout<<b;
	b[3]=0.01;
	a[8]=0.345;
	cout<<b[3];
	cout<<a[8];
	
	return 0;
}
