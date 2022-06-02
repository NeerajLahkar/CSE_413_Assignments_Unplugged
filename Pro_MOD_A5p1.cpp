
#include<iostream>
#include<stdio.h>
#include<string.h>
#define MAX 30
using namespace std;

class Account;
class Bank{
	char *bankName,*branch;
	public:
	friend void input(Bank,Account);
	friend void display(Bank,Account);	
	friend void depo(Bank [],Account [],int);
	friend void with(Bank [],Account[], int);
	//Bank(){}
	Bank(){
		bankName = new char[30];
	       branch = new char[30];
	}
	/*~Bank(){
		delete bankName;
		delete branch;
	}*/

};

class Account{
	private:
	char *accType,*holder,*accno;
	float *bal=NULL;	
friend void input(Bank , Account);
friend void display(Bank, Account);
friend void depo(Bank[],Account[], int);
friend void with(Bank [],Account [],int);
	public:
	//Account(){}
	Account(){
		accno= new char[10];
		accType = new char[30];
		holder = new char[30];
		bal= new float;
	}

	/*void depo(){

		int amt;
		cout<<"Enter the amount to deposit:"<<"\n";
		cin>>amt;
		*(bal)+=amt;
		//cout<<"sdf"<<*(bal);
	}
	void with(){
		int ant;
		cout<<"Enter the amount to withdraw:"<<"\n";
		cin>>ant;
		if(ant>*(bal)){
			cout<<"Not Sufficient"<<"\n";
		}
		else{
			*(bal)-=ant;
		}
	}
*/
	/*~Account(){
		delete accType;
		delete holder;
		delete bal;
	}*/

};
void input(Bank x,Account y){
	cout<<"Enter Bank Name:"<<"\n";
	cin>>x.bankName;
	cout<<"Enter Branch Name:"<<"\n";
	cin>>x.branch;
	cout<<"Enter Account Type:"<<"\n";
	cin>>y.accType;
	cout<<"Enter Account number:"<<"\n";
	cin>>y.accno;
	cout<<"Enter Holder Name:"<<"\n";
	cin>>y.holder;
	cout<<"Enter Bank Balance:"<<"\n";
	cin>>*(y.bal);
}
void display(Bank x,Account y){
	cout<<"Bank Name:"<<"\n";
	cout<<x.bankName<<"\n";
	cout<<"Branch Name:"<<"\n";
	cout<<x.branch<<"\n";
	cout<<"Account Type:"<<"\n";
	cout<<y.accType<<"\n";
	cout<<"Account Number:"<<"\n";
	cout<<y.accno;
	cout<<"Holder Name:"<<"\n";
	cout<<y.holder<<"\n";
	cout<<"Bank Balance:"<<"\n";
	cout<<*(y.bal)<<"\n";
}

void depo(Bank x[],Account y[],int n){
   	int i=0;
	char *ano;
	ano= new char[10];
	cout<<"Enter the account number:"<<"\n";
	cin>>ano;
	
	for(i=0;i<n;i++){
	if(strcmp(ano,y[i].accno)==0){	
                   float amt;
                   cout<<"Enter the amount to deposit:"<<"\n";
                   cin>>amt;
                   if(!std::cin<<(int)amt){
                   	cout<<"Error\n";
					std::cin.clear();
					std::cin.ignore(100,'\n');
					}
					else{
					
                   if(amt<0.0){ cout<<"Enter Valid Amount!!!"<<"\n";}
                   else{
      		   *(y[i].bal)+=amt;
      			}
      		}
			}
			else{ cout<<"Account Not Available!!!"<<"\n";}	
		}
	
      	//cout<<"sdf"<<*(bal);
}


void with(Bank x[],Account y[],int n){
                 int i=0;
		 char *ant;
		 ant= new char[10];
                 cout<<"ENTER BANK ACCOUNT NUMBER:"<<"\n";
		 cin>>ant;
		 for(i=0;i<n;i++){
                            if(strcmp(ant,y[i].accno)==0){

				    float z;
				    cout<<"\nENTER THE AMOUNT TO WITHDRAW\n";
				    cin>>z;
				    if(!std::cin<<(int)z){ 
					cout<<"Error\n";
					std::cin.clear();
					std::cin.ignore(100,'\n');
					}
					else{
					
				if(z<0.0){ cout<<"Enter Valid Amount!!!"<<"\n";}
				else{
				if(z>*(y[i].bal) || z<=0){
						cout<<"Insufficient Balance"<<"\n";
						}
						else{		
				    *(y[i].bal)-=z;
				    cout<<"UPDATED BALANCE IS "<<*(y[i].bal);
				    cout<<"\n\n\n\n";
			    }
			}
		 }
	}
		 else{ cout<<"Account Not Available!!!"<<"\n";}
			}
}
	
	   


int main(){
	int n,opt,cho;
	int i=0;
	
	cout<<"Create Account:"<<"\n";
	cin>>n;
	if(!std::cin>>n){
		cout<<"Error\n";
			std::cin.clear();
		std::cin.ignore(100,'\n');
}
else{

	//Account Ac[n];
	Bank x[n];
	Account y[n];
	Bank a;
	Account b;
	while(1){
		cout<<"_-_MENU_-_"<<"\n";
		cout<<"1. Enter The Details:"<<"\n";
		cout<<"2. Display The Details:"<<"\n";
		cout<<"3. Deposit:"<<"\n";
		cout<<"4. Withdraw:"<<"\n";
		cout<<"5. Exit"<<"\n";
		cout<<"Enter a option:"<<"\n";
		cin>>opt;
		if(!std::cin<<opt){
			cout<<"Error\n";
			std::cin.clear();
			std::cin.ignore(100,'\n');
			}
			else{
			
		switch(opt){
			case 1:
			for(i=0;i<n;i++){
				cout<<"Enter Bank Details:"<<"\n";
				input(x[i],y[i]);
			}
			break;
			case 2:
				for(i=0;i<n;i++){
					cout<<"Bank Details:"<<"\n";
					display(x[i],y[i]);
				}
			break;
			case 3:
			depo(x,y,n);
			
			break;
			case 4:
			with(x,y,n);
			break;
			case 5:
			exit(0);
			default:
			cout<<"Choose A Valid Option"<<"\n";	
			}
		}
		}
	}
}

