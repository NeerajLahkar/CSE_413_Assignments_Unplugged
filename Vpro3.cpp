#include<iostream>

using namespace std;

class DM
{
	int m;
	int cm;

	public:
	DM()
	{
		m=0;
		cm=0;
	}
	
	DM(int a,int b)
	{
		m=a;
		cm=b;
	}

	friend class DB;
	
	void disp()
	{
		cout<<"Units In Meter & Cent-Meters :"<<m<<"."<<cm<<endl;	
	}
};


class DB
{
	int ft;
	int in;
	
	public:
	DB()
	{
		ft=0;
		in=0;
	}
	
	
	
	DB(int a, int b)
	{
		ft=a;
		in=b;
	}

	friend class DM;
	
	void addB(DM q)
        {
            DB num1;
            num1.in=q.cm*0.39;
            if(num1.in+in<12)
                num1.in=num1.in+ this->in;

            else
            {
                num1.in=num1.in+in-12;
        	    num1.ft++;
            }
            num1.ft=this->ft + q.m*3.28;

			DM num2;
        	num2.cm=in*2.54;
        	if(num2.cm+q.cm<100)
            num2.cm=num2.cm + q.cm;

        	else
        	{
    	    	num2.cm=num2.cm+q.cm-100;
            	num2.m++;
        	}
        	num2.m=q.m + this->ft*0.3048;
			num1.disp();
			num2.disp();
        }

	void disp()
	{
		cout<<"Units As Feet & Inches :"<<ft<<"."<<in<<endl;
	}
	
};


int main()
{
	int p1,p2,q1,q2;
	cout<<"Enter values of meter & cm:"<<"\n";
	cin>>p1>>p2;
	cout<<"Enter values of feet & in:"<<"\n";
	cin>>q1>>q2;
	DM a(p1,p2);
	DB b(q1,q2);
	b.addB(a);
	return 0;
}