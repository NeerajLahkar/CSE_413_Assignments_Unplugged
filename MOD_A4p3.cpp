//NEERAJ LAHKAR
//CSE-21/20

#include<iostream>
using namespace std;

class time{
	public:
		int hrs;
		int mins;
		int secs;
		
		time():hrs(0),mins(0),secs(0){}
		time(int a,int b,int c){
			hrs=a;
			mins=b;
			secs=c;
		}
		time sum(time x,time y){
			secs=x.secs+y.secs;
			while(secs>59){
				secs-=60;
				mins++;
			}
			mins=x.mins+y.mins;
			while(mins>59){
				mins-=60;
				hrs++;
			}
			hrs=x.hrs+y.hrs;
		}
		void display(){
			cout<<"H"<<":"<<"M"<<":"<<"S"<<"\n";
			cout<<hrs<<":"<<mins<<":"<<secs<<"\n";
		}
};

int main(){
	int h1,h2,m1,m2,n1,n2;
	cout<<"Enter Hours 1:"<<"\n";
	cin>>h1;
	cout<<"Enter Minutes 1:"<<"\n";
	cin>>m1;
	cout<<"Enter Seconds 1:"<<"\n";
	cin>>n1;
	cout<<"Enter Hours 2:"<<"\n";
	cin>>h2;
	cout<<"Enter Minutes 2:"<<"\n";
	cin>>m2;
	cout<<"Enter Seconds 2:"<<"\n";
	cin>>n2;
	
	const time x(h1,m1,n1);	//2,49,30
	const time y(h2,m2,n2);	//3,30,15
	time z;
	z.sum(x,y);
	z.display();
}

