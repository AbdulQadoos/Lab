#include<iostream>
#include<stdlib.h>

using namespace std;

class user{
	private:
	    char * name;            //user name
	    int account_no;         //user account number
	    int money;
		int password;              //user bank status
	public:
		user(char * names, int acc , int  moneys,int password);
		void withdraw(int);
		void fund(int,int);
		
};


class account{
	public:
		char * nam;
		int acc_no;
		int m; 	
};



void user::fund(int a,int h)
{
	account x[5];
	for(int i=0;i<5;i++)
	{
	if(h=x[i].acc_no)
	{
		cout<<"Account"<<x[i].acc_no<<endl;
		cout<<"You matched the account."<<endl;
		x[i].m=x[i].m+a;
		cout<<"Total money in account"<<x[i].m<<endl;
		break;
	}
	else{
		cout<<"Account Invalid."<<endl;
	}
	
	
	}
	
}

account b[5];

user::user(char * names, int acc , int  moneys, int pass)
{
	cout<<"Enter name of user:"<<endl;
	names=(char *) malloc(sizeof(char));
	cin>>names;
	cout<<"Enter account number:"<<endl;
	cin>>acc;
	cout<<"Enter money:"<<endl;
	cin>>moneys;
	cout<<"Enter password:"<<endl;
	cin>>password;
	this->name=names;
	this->account_no=acc;
	this->money=moneys;
	this->password=pass;
	//cout<<this->name<<endl;
	
}

void user::withdraw(int m)
{
	int  mone;
	mone=this->money-m;
	cout<<"Moneys left in your account:"<<mone<<endl;
}

int main(void)
{
	user a=user(0,0,0,0);
	cout<<"Creating account for other users!!!!"<<endl;
    for(int i=0;i<5;i++)
	{
	cout<<"Enter name of user:"<<endl;
	b[i].nam=(char *) malloc(sizeof(char))  ;
	cin>>b[i].nam;
	cout<<"Enter account number:"<<endl;
	cin>>b[i].acc_no;
	cout<<"Enter money of accounts:"<<endl;
	cin>>b[i].m;
	}
	
	
	cout<<"1)for withdraw money:"<<endl;
	cout<<"2)transfer money to another account:"<<endl;
	cout<<"3)Pay your bill:"<<endl;
	cout<<"4)Query your bank statement:"<<endl;
	cout<<"5)To Exit."<<endl;
	cout<<"What do you want?"<<endl;
	while(1)
	{
	int r;
	cin>>r;
	int c;
	int i;
	int ac;
	int f;
	if (r==1)
	{  
	cout<<"Please enter money to with draw:"<<endl;
	cin>>i;
	a.withdraw(i);
	}
	
	if(r==2)
	{
		cout<<"please enter account."<<endl;
		cin>>ac;
		cout<<"please enter fund."<<endl;
		cin>>f;
		a.fund(f,ac);
	}
	}
}
