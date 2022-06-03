#include<iostream>
#include<string>
#define MAX 30
using namespace std;

class publication{
	string title;
	float price;

	public:
	void getdata(){
		cout<<"Enter Book Title Name:"<<"\n";
		cin>>title;
		cout<<"Enter Price of the book:"<<"\n";
		cin>>price;
	}
	void putdata(){
		cout<<"Title:"<<"\n";
		cout<<title<<"\n";
		cout<<"Price:"<<"\n";
		cout<<price<<"\n";
	}
};

class book: public publication{
	int pages;

	public:
		
	void getdata(){
		//publication::getdata();
		cout<<"Enter Number Pages:"<<"\n";
		cin>>pages;
	}
	void putdata(){
		//publication::putdata();
		cout<<"Number of Pages:"<<"\n";
		cout<<pages<<"\n";
	}
};

class audio: public publication{
	float pTime;

	public:

	void getdata(){
		//publication::getdata();
		cout<<"Enter Playing Time:"<<"\n";
		cin>>pTime;
	}
	void putdata(){
		//publication::putdata();
		cout<<"Playing Time:"<<"\n";
		cout<<pTime<<"\n";
	}
};

int main(){
	int opt,n;
	book bo[MAX];
	audio au[MAX];
	while(1){
		
		cout<<"\n";
		cout<<"1. Enter"<<"\n";
		cout<<"2. Display"<<"\n";
		cout<<"3. Exit"<<"\n";
		cout<<"Enter A Option:"<<"\n";
		cin>>opt;
		if(!std::cin>>opt){
			cout<<"!!!ERROR!!!"<<"\n";
			std::cin.clear();
			std::cin.ignore(100,'\n');
		}
		else{
		switch(opt){
		case 1:
			cout<<"Enter Number Of Books:"<<"\n";
			cin>>n;
			if(!std::cin>>n){
				cout<<"!!!ERROR!!!"<<"\n";
				std::cin.clear();
				std::cin.ignore(100,'\n');
			}
			else{
			for(int i=0;i<n;i++){
				au[i].publication::getdata();
				bo[i].getdata();
				au[i].getdata();
			}
			}
			break;
		case 2:
			cout<<"Details:"<<"\n";
			for(int i=0;i<n;i++){
				au[i].publication::putdata();
				bo[i].putdata();
				au[i].putdata();
			}
			break;
		case 3:
			exit(0);
		default:
			cout<<"Enter A Valid Option!!!"<<"\n";
			}
		}
	}
}











	

