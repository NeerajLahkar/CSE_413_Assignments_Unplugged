//NEERAJ LAHKAR
//CSE-21/20

#include <iostream>
using namespace std;
void array(int arr[20][20], int x, int y);
int main(){
int arr[10][10],m,n,i,j;
cout<<"Enter the value of m and n:";
cin>>m>>n;
array(arr,m,n);
cout<<endl;

cout<<"The elements of the matrix is:"<<endl;
for(i=0;i<m;i++){
	for(j=0;j<n;j++){
	cout<<arr[i][j]<<"\t";
		}
	cout<<endl;
	}
return 0;
}

void array(int arr[10][10],int x,int y){

int i,j;
for(i=0;i<x;i++){
	for(j=0;j<y;j++){
	cin>>arr[i][j];
		}
	}
}



