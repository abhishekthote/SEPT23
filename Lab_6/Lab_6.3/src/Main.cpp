
//constant data member and member function
#include<iostream>
 using namespace std;
 class Test{
 private:
 int num;
 public:

   Test( void ) : num( 50 ){
   this->num = num ; //OK
   }

  void printRecord(void)const{
	 cout<<"Number: "<<this->num<<endl;
  }

};
 int main(void){
	 Test t1;
	 t1.printRecord();
	 return 0;
 }
