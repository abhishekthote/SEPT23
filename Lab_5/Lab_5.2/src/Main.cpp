#include<iostream>
using namespace std;
class Complex{
private:
	int real;
	int imag;
public:
	void acceptRecord(void){
		cout<<"Enter Real: ";
		cin>>this->real;
		cout<<"Enter Imag:  ";
		cin>>this->imag;
	}

	Complex sum( Complex other){
		Complex result;
		result.real = this->real + other.real;
		result.imag = this->imag + other.imag;
		return result;
	}
	Complex sum( Complex *ptr ){
			Complex result;
			result.real = this->real + ptr->real;
			result.imag = this->imag + ptr->imag;
			return result;
		}
	void printRecord(){
		cout<<"Real num : 	"<<this->real<<endl;
		cout<<"Imag num : 	"<<this->imag<<endl;
	}

};
int main(void){
	Complex c1,c2,c3;

	c1.acceptRecord();
	c2.acceptRecord();
	c3= c1.sum(c2);
	//c3 = c1.sum( &c2 );
    c3.printRecord();
		return 0;
	}
