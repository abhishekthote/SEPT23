#include<iostream>
#include<string>
using namespace std;
class Shape {
protected:
	double area;
public:
	virtual void acceptRecord(void)=0;

	virtual void calculateArea()=0;

	void printRecord() {
		cout << "Area is:	 " << this->area << endl;
	}

};
class Circle: public Shape {
private:
	float radius;
public:
	void acceptRecord(void) {
		cout << "Enter Radius:	" << endl;
		cin >> this->radius;
	}
	void calculateArea() {
		this->area = 3.15 * this->radius * this->radius;
	}

};
int menu_list(void) {
	int choice;
	cout << "0.Exit" << endl;
	cout << "1.circle	" << endl;
	cout << "2.Rectangle	" << endl;
	cout << "	" << endl;
	cout << "Enter choice:	" << endl;
	cin >> choice;
	return choice;
}
int main(void) {
	int choice;
	while ((choice = ::menu_list()) != 0) {
		Shape *ptr = nullptr;
		switch (choice) {
		case 1:
			ptr = new Circle();

			break;

		}

		if (ptr != 0) {
			ptr->acceptRecord();
			ptr->calculateArea();
			ptr->printRecord();
		}
	}

	return 0;
}

