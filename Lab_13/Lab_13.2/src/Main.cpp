#include<iostream>
#include <string>
using namespace std;
class Shape{
protected:
	double area;
public:
	Shape(void){
	this->area=0;
	}
	virtual void acceptRecord(void)=0;

	virtual void calculateArea(void)=0;

	void printRecord(){
		cout<<"Area is  :	"<<this->area<<endl;
	}
	virtual ~Shape( void ){
		}
};
class Rectangle:public Shape{
private:
	float length;
	float breadth;
public:
	Rectangle(void){
		this->length=0;
		this->breadth=0;
	}
	void acceptRecord(void){
		cout<<"Enter Length:	";
		cin>>this->length;
		cout<<"Enter Breadth:	";
		cin>>this->breadth;
	}
	void calculateArea(void){
		this->area=this->length * this->breadth;
	}
	virtual ~Rectangle( void ){
			}
};

class Circle:public Shape {
private:
	int radius;
public:

	void acceptRecord(void){
		cout<<"Enter radius:	";
		cin>>this->radius;
	}
	 void calculateArea(void){
	 this->area=3.14*this->radius*this->radius;
	}

	 virtual ~Circle( void ){
	 			}

};
int menu_list(void)  {
	int choice;
	cout<<"0.Exit  "<<endl;
	cout<<"1.Rectangle  "<<endl;
	cout<<"2.Circle  "<<endl;
	cout<<"  "<<endl;
	cout<<"Enter Choice:	  "<<endl;
	cin>>choice;
	return choice;
}
int main(void){
	int choice;
	while( ( choice  =::menu_list( ) ) !=0){
		Shape *ptr= nullptr;
		switch(choice){
		case 1:
			ptr =new Rectangle();
			break;

		   }

		if(ptr!=0){
		ptr->acceptRecord();
		ptr->calculateArea();
		ptr->printRecord();
		delete ptr;
     }

	}



return 0;
}


