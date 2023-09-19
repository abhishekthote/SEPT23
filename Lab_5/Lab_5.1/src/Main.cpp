
//this pointer

#include<iostream>
using namespace std;
class Complex{
private:
	int real;
	int imag;
public:

	void setReal(int real){
		this->real=real;
		}
	void setImag(int imag){
		this->imag=imag;
	}
	int getReal(void){
		return this->real;
	}
	int getImag(void){
		return this->imag;
	}

};
int main(void){
	Complex c1,c2;

	c1.setReal(10);
	c1.setImag(20);

	c2.setReal(90);
	c2.setImag(100);
	cout<<"Real Num of c1:	"<<c1.getReal()<<endl;
	cout<<"Imag Numof  c1:	"<<c1.getImag()<<endl;
	cout<<"Real Numof  c2:	"<<c2.getReal()<<endl;
	cout<<"Imag Numof  c2:	"<<c2.getImag()<<endl;

	return 0;
}
