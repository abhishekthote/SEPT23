
#ifndef STUDENT_H_
#define STUDENT_H_
#include<string>
using namespace std;
class Student{
	string name;
	int rollNumber;
	float marks;
	char grade;
public:
	void setName(string name);
	void setRollN(int No);
	void setMarks(float Marks);
	void calculateGrade();
	void  print_Record();
};

#endif /* STUDENT_H_ */
