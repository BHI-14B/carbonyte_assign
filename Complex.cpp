#include<iostream>
using namespace std;

class Complex
{
	int i;
	int j;
	
	public:
	Complex(int i1,int j1)
	{
		this->i=i1;
		this->j=j1;
	}
	
	void display()
	{
		cout<<this->i<<" + i"<<this->j;
	}
	
	Complex operator+ (Complex C1)
	{
		Complex temp(C1.i+i,C1.j+j);
		return temp;
	}
	
};

int main()
{
	Complex c1(10,5);
	Complex c2(2,4);
	Complex c3=c1+c2;
	c3.display();
}   
