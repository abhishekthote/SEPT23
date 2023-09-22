#include<iostream>
#include<string>
#include"../include/Student.h"
using namespace std;


int main(void){
   Student s1;
   s1.setName("Abhi");
   s1.setRollN(21);
   s1.setMarks(90);
   s1.calculateGrade();
   s1.print_Record();
}
