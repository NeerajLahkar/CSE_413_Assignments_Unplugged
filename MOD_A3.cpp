#include<iostream>
#include<string.h>
using namespace std;
class subjects;
class students{
	char *name;
	char *roll;
	int marks;
	public:
		students(){
			name= new char[30];
			roll= new char[10];
		}
		friend void input(students x,subjects y);
		friend void output(students x,subjects y);
		friend void update(students x,subjects y);
		friend void avg(students x,subjects y);
		friend void high(students x,subjects y);
};

class subjects{
	int *marks;
	
	public:
		subjects(){
			marks= new int[2]; 
		}
		friend void input(students x,subjects y);
		friend void output(students x,subjects y);
		friend void update(students x,subjects y);
		friend void avg(students x,subjects y);
		friend void high(students x,subjects y);
};
void input(students x,subjects y){
	cout<<"Enter Name:"<<"\n";
	cin>>x.name;
	cout<<"Enter roll no.:"<<"\n";
	cin>>x.roll;
	for(int i=0;i<5;i++){
		cout<<"Subject "<<i+1<<":"<<"\n";
		cin>>y.marks[i];
	}
}
void output(students x,subjects y){
	cout<<"Name:"<<"\n";
	cout<<x.name<<"\n";
	cout<<"Roll No.:"<<"\n";
	cout<<x.roll<<"\n";
	for(int i=0;i<5;i++){
		cout<<"Subject"<<i+1<<":"<<" ";
		cout<<y.marks[i]<<"\n";
	}
}
void update(students x,subjects y){
	char *num1;
	num1= new char[10];
	int pos,m;
	cout<<"Enter subject no. :"<<"\n";
	cin>>pos;
	cout<<"Enter new mark:"<<"\n";
	cin>>m;
	for(int i=0;i<pos;i++){
		if((i+1)==pos){
		y.marks[i]=m;
		cout<<"Updated!!!"<<"\n";
	}
	//else{cout<<"ERROR!!!"<<"\n";}
}
}
/*void update(students x[],subjects y[],int n){
	char *num1;
	num1= new char[10];
	cout<<"Enter The Roll No.:"<<"\n";
	cin>>num1;
	for(int i=0;i<n;i++){
		if(strcmp(num1,x[i].roll)!=0){
			cout<<"sds"<<"\n";
		}
		
		else{
				int pos,num2,num3;
			//num2=i;
			cout<<"Enter subject No.:"<<"\n";
			cin>>pos;
			cout<<"Enter the new mark:"<<"\n";
			cin>>num3;
//			for(int i=0;i<pos;i++){
//			if(i+1==pos){
			(y->marks[i])=num3;
			cout<<"Update Successful"<<"\n";
//	}
}
}
		}
	}*/

void avg(students x,subjects y){
	int sum,i=0;
	for (i=0;i<5;i++){
		sum+=y.marks[i];
	}
	cout<<(sum/5)<<"\n";
}
void high(students x,subjects y){
	int high=0,i=0;
	for(i=0;i<5;i++){
		if(y.marks[i]>high){
			high=y.marks[i];
		}
		
	}
	cout<<high<<"\n";
	
}
int main(){
	int n,opt;
	cout<<"Enter no. of students:"<<"\n";
	cin>>n;
	students std[n];
	subjects sub[n];
	while(1){
	
	cout<<"_-_MENU_-_"<<"\n";
	cout<<"1. Enter Student Details"<<"\n";
	cout<<"2. Display Student Details:"<<"\n";
	cout<<"3. Update Mark:"<<"\n";
	cout<<"4. Avg"<<"\n";
	cout<<"5. High"<<"\n";
	cout<<"6. Exit"<<"\n";
	cout<<"Enter An Option:"<<"\n";
	cin>>opt;
	switch(opt){
	case 1:
	for(int i=0;i<n;i++){
		cout<<"Enter Details of Student "<<i+1<<":"<<"\n";
		input(std[i],sub[i]);
	}
	break;
	case 2:
	for(int i=0;i<n;i++){
		cout<<"Details of Student "<<i+1<<":"<<"\n";
		output(std[i],sub[i]);
	}
	break;
	case 3:
		int a;
		cout<<"Enter Student No. :"<<"\n";
		cin>>a;
		for(int i=0;i<n;i++){
			if(a==(i+1)){
		update(std[i],sub[i]);
	
	}
}
		break;
		case 4:
			for(int i=0;i<n;i++){
				cout<<"Avg of student "<<i+1<<":"<<"\n";
			avg(std[i],sub[i]);
		}
		break;
		case 5:
			for(int i=0;i<n;i++){
				cout<<"Highest mark "<<i+1<<":"<<"\n";
				high(std[i],sub[i]);
			}
			break;
	case 6:
		exit(0);
	default:
		cout<<"!!!Enter A Valid Option!!!"<<"\n";
}
}
}

