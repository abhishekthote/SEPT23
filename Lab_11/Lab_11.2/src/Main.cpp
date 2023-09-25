#include<iostream>
using namespace std;

class Complex{
private:
	int real;
	int imag;
public:
		Complex(void);

		Complex(int real,int imag) ;

		void setReal(int real);

		int getReal(void);

		void setImag(int imag);

		int getImag(void);

		void operator() (int real,int imag);

		friend istream& operator>>(istream &cin,Complex &other);

		friend ostream& operator<<(ostream &cout,Complex &other);
};

 Complex::Complex(void){

}

 Complex::Complex(int real,int imag) : real(real),imag(imag){

}

void Complex:: setReal(int real){
	this->real=real;
}

int Complex:: getReal(void){
	return this->real;
}

void Complex::setImag(int imag){
	this->imag=imag;
	}

int Complex:: getImag(void){
	return this->imag;
}

void Complex::operator() (int real,int imag){
	this->real=real;
	this->imag=imag;
}


 istream& operator>>(istream &cin,Complex &other){
	cout<<"Enter Real Num:		"<<endl;
	cin>>other.real;
	cout<<"Enter imag Num:		"<<endl;
	cin>>other.imag;
	return cin;
}

 ostream& operator<<(ostream &cout,Complex &other){
	cout<<"Real Num : 	"<<other.real<<endl;
	cout<<"Imag Num : 	"<<other.imag<<endl;
	return cout;
}

int main(void){
	Complex c1,c2,c3;
	cin>>c1;
	cin>>c2;
	c1.setReal(c1.getReal());
	c1.setImag(c1.getImag());

	c2.setReal(c2.getReal());
	c2.setImag(c2.getImag());


	cout<<c1;
	cout<<c2;
	return 0;
}
