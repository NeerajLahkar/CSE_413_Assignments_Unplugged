#include<iostream>

#include<stdlib.h>


using namespace std;


class Int

{

    int num;


    public:


    Int()

    {

        num=0;

    }


    Int(int x)

    {

        num=x;

    }


    void disp();

    Int operator+(Int);

    void operator+=(int);

    int operator++(int);

    friend void operator<<(ostream&, Int&);


};



Int Int::operator+(Int b)

{

    Int temp;

    temp.num=num+b.num;


    return temp;

}


void Int::operator+=(int y)

{

    num=num+y;


}


int Int::operator++(int z)

{

    num=num+z;


    return num;

}


void operator<<(ostream&ans, Int&val)

{

    ans<<val.num<<"\n";

}


int main(void)

{

    Int a(5), b(7), c;


    c=a+b; // same as writing c=a.operator+(b);

    a+=1; // same as writing a.operator+=(1);

    c+=b++; // same as writing c.operator+=(b.operator++(1));

    cout<<a;


    return 0;

}
