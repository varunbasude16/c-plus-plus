#include<iostream>
using namespace std;
class personalDetail{
	protected:
		string name;
		int contact;
	public:
		void DisplaypersonalDetails(){
			cout<<"Name: "<<name<<endl;
			cout<<"Conctact number: "<<contact<<endl;
		}
		void getPersonalDetails(){
			cout<<"Enter Name:";
			cin>>name;
			cout<<"Enter contact number:";
			cin>>contact;
			return;
		}
};
class Account:public personalDetail{
	private:
		int number;
		float balance;
	public:
		int getaccountnumber(){
			return number;
		}
		Account (){
			balance=0;
		}
		void getdetails(){
			cout<<"Enter New Account Number :";
			cin>>number;
			cout<<"Enter initail balance :";
			cin>>balance;
			getPersonalDetails();
		}
		void display(){
			cout<<"Account Number: "<<number<<endl;
			cout<<"Balance : "<<balance<<endl;
			DisplaypersonalDetails();
		}
		void deposit(){
			cout<<"Enter money to deposit:";
			int money;
			cin>>money;
			balance=balance+money;
			cout<<"Money depositted successfully\n";
		}
		void withdraw(){
			cout<<"Enter money to withdraw:";
			int money;
			cin>>money;
			balance=balance-money;
			cout<<"Money withdrawed successfully\n";
		}
		void displaybalance(){
			cout<<"Balance:"<<balance<<endl;
			return;
		}
		void update(){
			cout<<"Enter updated details:-\n";
			getPersonalDetails();
			cout<<"Enter initail balance :";
			cin>>balance;
			cout<<"Details updated successfully\n";
		}
};
class bank  {
	private :
		Account acc[100];
		int totalaccounts;
	public:
		bank (){
			totalaccounts=0;
		}
		int findindex(int x){
			for (int i=0;i<totalaccounts;i++)
			if(x==acc[i].getaccountnumber())
			return i;
			return -1;
		}
		void depositMoney(){
			int accNo;
			cout<<"Enter Account number:";
			cin>>accNo;
			int index=findindex(accNo);
			if(index!=-1){
				acc[index].deposit();
			} else {
				cout<<"account not found";
				return;
			}
		}
		void createAccount(){
			if(totalaccounts<100){
			acc[totalaccounts].getdetails();
			cout<<"Acount created successfully\n";
			totalaccounts++;
			} else {
				cout<<"Maximum account limit  reached\n";
			}	
		}
		void DisplayDetails(){
			int accno;
			cout<<"Enter account number:";
			cin>>accno;
			int index=findindex(accno);
			if(index!=-1){
				cout<<"\n--Details--\n";
				acc[index].display();
			}else {
				cout<<"Account not found\n";
			}
		}
		void withdrawMoney(){
			int accNo;
			cout<<"Enter Account number:";
			cin>>accNo;
			int index=findindex(accNo);
			if(index!=-1){
				acc[index].withdraw();
			}else {
				cout<<"account not found";
			}
		}
		void checkBalance(){
			cout<<"Enter bank Account number:";
			int accno;
			cin>>accno;
			int index=findindex(accno);
			if(index!=-1){
				acc[index].displaybalance();
			} else {
				cout<<"account not found\n";
				return; }
		}
		void updatedetails(){
			int accno;
			cout<<"Enter account number:";
			cin>>accno;
			int index=findindex(accno);
			if(index!=-1){
			acc[index].update();
		    } else {
			cout<<"Account not found\n";
			}
		}		
};
int main(){
	bank BOB;
	int op;
		cout<<"\n----BOB (Bank Of Baroda) Menu----\n";
		cout<<"0. Exit\n";
		cout<<"1.Create account\n";
		cout<<"2.Deposit money\n";
		cout<<"3.Withdraw money\n";
		cout<<"4.Check balance\n";
		cout<<"5.Update account details\n";
		cout<<"6.Display account details\n";
	do{
		cout<<"\nEnter oparation:";
		cin>>op;
		switch(op){
			case 1:BOB.createAccount();
					break;
			case 2:BOB.depositMoney();
					break;
			case 3:BOB.withdrawMoney();
					break;
			case 4:BOB.checkBalance();
			 		break;
			case 5:BOB.updatedetails();
					break;
			case 6:BOB.DisplayDetails();
					break;
			case 0: break;
			default: cout<<"Invalid Oparation";			
		}
	}while(op!=0);
	return 0;
}
