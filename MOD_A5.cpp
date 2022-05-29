#include<iostream>
#include<string.h>
#define MAX 50
using namespace std;

class books{
	char *title,*author,*pub;
	float price;
	int stock;
	void update(float nP)
	{
		price=nP;
		cout<<"\n\nPrice updated successfully!!!\n\n\n";
	}
	public:
	static int sT; // successful transaction
	static int uT; // unsuccessful transaction
	books(){
		title= new char[30];
		author= new char[30];
		pub= new char[30];
		stock=0;
		price=0;
	}

	~books()
	{
		delete title;
		delete author;
		delete pub;
	}

	void Tstatus(char s[], books b) // Transaction status
	{
		if(strcmp(s, "successful")==0)
		{
			b.sT++; // increment number of successful transaction
		}

		else
		{
			b.uT++; // increment number of unsuccessful transaction
		}
	}

	void input(){
		cout<<"Enter The Title:"<<"\n";
		cin>>title;
		cout<<"Enter Author Name:"<<"\n";
		cin>>author;
		cout<<"Enter the name of the Publishers:"<<"\n";
		cin>>pub;
		cout<<"Enter The Stock Numbers:"<<"\n";
		cin>>stock;
		cout<<"Enter the price:"<<"\n";
		cin>>price;
	}
	void disp(){
		cout<<"Author:"<<author<<"\n";
		cout<<"Title:"<<title<<"\n";
		cout<<"Publisher:"<<pub<<"\n";
		cout<<"Stock:"<<stock<<"\n";
		cout<<"Price:"<<price<<"\n";
		cout<<"Successful transactions: "<<sT<<endl;
		cout<<"Unsuccessful transactions: "<<uT<<endl;
	}
	void search(books b[], int n){
		char t[MAX],a[MAX];
		cout<<"Enter the Author name:"<<"\n";
		cin>>a;
		cout<<"Enter the Title name:"<<"\n";
		cin>>t;
		for(int i=0; i<n; i++)
		{
			if(strcmp(b[i].title,t)==0 && strcmp(b[i].author,a)==0)
			{
				cout<<"Book Found!!!"<<endl;
				return;
			}

		}	
		cout<<"Book not found!!\n\n";
	} 
	
	void searchNupdate(books b[], int n, float nP, char *bn)
	{
		for(int i=0; i<n; i++)
		{
			if(strcmp(b[i].title, bn)==0)
			{
				b[i].update(nP);
			}
		}
	}

	void request(books b[],int n){
		char t[MAX],a[MAX];
		int out;
		cout<<"Enter author"<<"\n";
		cin>>a;
		cout<<"Title"<<"\n";
		cin>>t;
		int num;

		for(int i=0;i<n;i++){

			if(strcmp(b[i].title,t)==0 && strcmp(b[i].author,a)==0){
				cout<<"Enter the number of stocks:"<<"\n";
				cin>>num;
				if(num<=b[i].stock){
					out=num*b[i].price;
					cout<<"Total Cost:"<<out<<"\n";
					b[i].stock-=num;
					b[i].Tstatus("successful", b[i]);
					return;
				}
				else{
					cout<<"NOt Available"<<"\n";
					b[i].Tstatus("unsuccessful", b[i]);
					return;
				}
			}
		}
		cout<<"Required copies not in stock"<<"\n";
	}



};
int books::sT; // reserving memory for static variables!!!!
int books::uT;
int main(){
	int opt,n;
	float nP;
	int i=0;
	cout<<"Enter The Number Of Books:"<<"\n";
	cin>>n;
	books bo[n], b;

	char*bN=new char[100];

	for(i=0;i<n;i++){
		cout<<"Enter book details:"<<"\n";
		bo[i].input();
	}

	while(1){
		cout<<"1. Display"<<"\n";
		cout<<"2. Enter the details of the book you need:"<<"\n";
		cout<<"3. Request"<<"\n";
		cout<<"4. Update Price.\n";
		cout<<"5. Exit"<<"\n";
		cout<<"Enter a option:"<<"\n";
		cin>>opt;
		switch(opt){
			case 1:
				for(i=0;i<n;i++){
					bo[i].disp();
				}
				break;
			case 2:
				b.search(bo,n);
				//b.request(bo,n);
				break;
			case 3:
				b.request(bo,n);
				break;

			case 4:
				cout<<"enter new price: ";
				cin>>nP;

				cout<<"enter title of the book: ";
				cin>>bN;

				b.searchNupdate(bo, n, nP, bN);
				break;
			case 5:
				delete bN;
				return 0;
			default:
				cout<<"Enter a valid option!!!"<<"\n";
		}
	}


	delete bN;

	return 0;
}
