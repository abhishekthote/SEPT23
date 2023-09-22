#include"../include/BankingAccount.h"
#include<iostream>
using namespace std;

	BankingAccount::BankingAccount (string name,int acc){
	this->accountHolderName=name;
	this->accountNumber=acc;
	this->balance=0;
	//void displayAccountDetails();
	}
     void BankingAccount::deposit(){
	cout<<"money to deposit "<<endl;
	cin>>balance;
     }
	void BankingAccount:: withDraw()
	{
      cout<<"withdraw  : "<<endl;
      double with;
      cin>>with;
      this->balance=this->balance-with;
    }
	void BankingAccount:: displayAccountDetails(){
		cout<<"accountHolderName : "<<accountHolderName<<endl;
		cout<<"accountNumber  :  "<<accountNumber<<endl;
		cout<<"balance  :  "<<balance<<endl;
	}
