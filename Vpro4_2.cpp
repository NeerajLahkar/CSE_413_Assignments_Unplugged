#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

class String
{
	char s[30];

	public:

	String()
	{
		strcpy(s, "\0"); 
	}

	String(char*str)
	{
		strcpy(s, str);
	}

	String operator=(String); 
	String operator+(String); 
	void display();
};


String String::operator=(String s2)
{
	strcpy(s, s2.s);	

	return *this; 
}

String String::operator+(String s2)
{
	strcat(s, s2.s); 

	return *this;
}

void String::display()
{
	cout<<s<<endl;
}


int main(void)
{		
	String s1; 
	cout<<"String s1  ";
	s1.display();
	cout<<endl;

	cout<<"String s2";
	String s2("Well Done!!"); 
	
	s2.display();
	cout<<endl;

	cout<<"String s3 ";
	String s3(" Great!!"); 
	s3.display();
	cout<<endl;

	cout<<"String s4 ";
	String s4;
	s4.display();
	cout<<endl;

	s1=s2; 
	cout<<"The copied string is :";
	s1.display();
	cout<<endl;

	s4=s2+s3;
	cout<<"The concatenated string is :";
	s4.display();
	cout<<endl;


	return 0;
}