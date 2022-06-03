#include<iomanip>
#include<iostream>
using namespace std;

class Ve{
	float v[3];
	//int i=0;
	public:
	Ve(){
		for(int i=0;i<3;i++){
			v[i]=0.0;
		}
	}
	Ve operator+(Ve n2){
		Ve temp;
		for(int i=0;i<3;i++){
			temp.v[i]=v[i]+n2.v[i];
		}
		return temp;
	}

	void input(){
		for(int i=0;i<3;i++){
			cout<<"Enter the value:"<<"\n";
			cin>>v[i];
			int qw;
			qw=v[i];
			if(!std::cin>> qw){
				cout<<"Error"<<"\n";
				std::cin.clear();
				std::cin.ignore(100,'\n');
			}
		}
	}
	void modi(int a,float b){
		if(a>=0 && a<3){
		       v[a]=b;	
	}
	else{
		cout<<"Hakuna Matata"<<"\n";
	}
	}
 void operator*(int x){
	 for(int i=0;i<3;i++){
		 v[i]*=x;
	 }
 }
 void disp(){
 	cout<<"(";
	for(int i=0;i<3;i++){
		cout<<setprecision(4);
		cout<<v[i]<<",";
	}
	cout<<")"<<"\n";
 }

};
int main(){
	Ve n1,n2,n3;
	int opt,sel,in;
	float ne;

	cout<<"Vector 1:"<<"\n";
	n1.input();
	cout<<"Vector 2:"<<"\n";
	n2.input();

	while(1){
		cout<<"\n";
		cout<<"1. Modify"<<"\n";
		cout<<"2. Multiply"<<"\n";
		cout<<"3. Display"<<"\n";
		cout<<"4. Add"<<"\n";
		cout<<"5. Exit"<<"\n";
		cout<<"Enter a option:"<<"\n";
		cin>>opt;
		if(!std::cin>>opt){
			cout<<"Error"<<"\n";
			std::cin.clear();
			std::cin.ignore(100,'\n');
		}
		else{
		
		switch(opt){
			case 1:
				cout<<"1. Modify Vector 1:"<<"\n";
				cout<<"2. Modify Vector 2:"<<"\n";
				cout<<"Select a vector:"<<"\n";
				cin>>sel;
				if(!std::cin>>sel){
			cout<<"Error"<<"\n";
			std::cin.clear();
			std::cin.ignore(100,'\n');
		}
		else{
		
				if(sel==1){
					cout<<"Select Index Number:"<<"\n";
					cin>>in;
					cout<<"Enter the new value:"<<"\n";
					cin>>ne;
					n1.modi(in,ne);
				}
				else if(sel==2){
					cout<<"Select Index Number:"<<"\n";
					cin>>in;
					cout<<"Enter the new value:"<<"\n";
					cin>>ne;
					n2.modi(in,ne);
				}
				else{
					cout<<"Enter a valid option"<<"\n";
				}
			}
				break;
			case 2:
				cout<<"Enter the scalar value:"<<"\n";
				cin>>ne;
				if(!std::cin>>(int)ne){
			cout<<"Error"<<"\n";
			std::cin.clear();
			std::cin.ignore(100,'\n');
		}
		else{
		
				n1*ne;
				n2*ne;
	}
				break;	
			case 3:
				n1.disp();
				n2.disp();
				break;
			case 4:
				n3=n1+n2;
				n3.disp();
				break;			
			case 5:
				exit(0);
			default:
				cout<<"Wrong Choice!!!"<<"\n";
			}
	}
}

}