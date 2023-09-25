//Constructor
//using setter getter
#include<iostream>
using namespace std;

class complex {
private:
	int real;
	int imag;
public:
	complex(int real ,int imag){
		cout<<"entered in constructor "<<endl;
		this->real=real;
		this->imag=imag;
	}

	void printRecord(void){
	cout<<"Real Num:	"<<	this->real <<endl;
	cout<<"Imag Num:	"<<	this->imag <<endl;
	}
};

 int main (void){
  complex c1 {10,20};
  c1.printRecord();
	return 0;
	}
	/*
	void setReal(int real  ){
		this->real=real;
	}
	int getReal (void){
		this->real=real;
		return real;
	}
	int getImag (void){
		this->imag=imag;
		return imag;
		}
	void setImag(int imag ){
		this->imag=imag;
	}


};
int main (void){
	complex c1 ;
	c1.setReal(100);
	c1.setImag(10);
	cout<<"Real num:	"<<c1.getReal()<<endl;
	cout<<"Imag num:	"<<c1.getImag()<<endl;

	return 0;
}
*/
