#include<iostream>
using namespace std;

class tollBooth{
	unsigned int car;
	int count=0;
	double total;
	
	public:
		tollBooth(){
			car=0;
			total=0;
		}
		void payingCar(){
			total+=250;
			car++;
			cout<<"PAID !!!"<<"\n";
		}
		void nopayCar(){
			count++;
			cout<<"NOT PAID !!!"<<"\n";
		}
		void display(){
			cout<<"Total Amount Collected:"<<total<<"\n";
			cout<<"Paying Cars:"<<car<<"\n";
			cout<<"Non-paying Cars:"<<count<<"\n";
			cout<<"Total Cars:"<<car + count<<"\n";
		}
};

int main(){
	tollBooth obj;
	char opt;
	
	while(1){
		cout<<"1. For Paying Cars(press A)"<<"\n";
		cout<<"2. For Non-Paying Cars(press B)"<<"\n";
		cout<<"3. Display The Details & Exit(press Esc)"<<"\n";
		cout<<"Enter An Option:"<<"\n";
		cin>>opt;
		
		switch(opt){
			case 97:
				obj.payingCar();
				break;
			case 98:
				obj.nopayCar();
				break;
			case 27:
				obj.display();
				exit(0);
			default:
				cout<<"!!!Enter A Valid Input!!!"<<"\n";
		}
	}
}
