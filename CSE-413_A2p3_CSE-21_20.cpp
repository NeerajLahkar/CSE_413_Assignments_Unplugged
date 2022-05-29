//NEERAJ LAHKAR
//CSE-21/20

#include <iostream> 

double power(double ,int);									//funtion prototyping
using namespace std;

int main(){
	double n;
	int p;
	double result=0;
	cout<<"Enter n: ";						
	cin>>n;											//requesting user to enter the value of n
	cout<<"Enter p: ";								
	cin>>p;											//requesting user to enter the value of p
	if(p<0){
		result=power(n,p);
		cout<<n<<"^2 = "<<result<<"\n\n";
	}else{
		result=power(n,p);										//calling the function power	
		cout<<n<<" "<<"to the power"<<" "<<p<< " is "<<result<<endl;     //for printing the result
	}
	return 0;
}
double power(double n,int p=2){
	double result=1;											//result initialized to 1 by default
	for(int i=0;i<p;i++){
		result=result*n;
	}
	return result;												//returns the result to the main function
}

