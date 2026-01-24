#include<iostream>
using namespace std;

class BankAccount{
	private:
		int balance;
	public:
		BankAccount(int b){
			balance=b;
		}
		friend class AccountManager;
};

class AccountManager{
	
	public:
		
		void displaybalance( BankAccount& account){
			cout<<account.balance;
		}
		void Addbalance(BankAccount& account,int x){
			account.balance+=x;
		}
		void Deductbalance(BankAccount& account,int y){
			account.balance-=y;
		}
};

int main(){
	BankAccount b1(10500);
	AccountManager M;
	M.displaybalance(b1);
	cout<<endl;
	M.Addbalance(b1,500); 
	M.displaybalance(b1);
	cout<<endl;
	M.Deductbalance(b1,500);
	M.displaybalance(b1);
	cout<<endl;
	return 0;
}
