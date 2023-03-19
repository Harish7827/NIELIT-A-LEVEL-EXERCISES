// Write a c++ program to create class named Bank Account with data member like acc_no and balance.
// Create two constructor - One without argument and another with argument to initialize the data member.
// Create showBalance method to display the current balance. Also create withdraw amount from bank.
// Create two objects of the class and perform withdraw operation. Display Balance for both the amount before and after withdraw operation.


#include<iostream>
using namespace std;

class Bank_Account{
    protected:
        int Account_number;
        double Balance;
    public:
        Bank_Account(){
           Account_number = 0;
           Balance = 0;
        }
        Bank_Account(int Account_number,double Balance){
            this->Account_number = Account_number;
            this->Balance = Balance;
        }
        void showBalance(){
            cout<<"Current Balance of Account Number "<< Account_number <<" is "<< Balance <<endl;
        }
        void withdrawAmount(double withdrawAmount){
            Balance -= withdrawAmount;
        }
};

int main(){
    Bank_Account Account1(1000141,500000);
    Bank_Account Account2(1000142,400000);
    int withdrawAmount1, withdrawAmount2;
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"\t********** WELCOME TO LUXMI CHEAT FUND BANK **********\n"<<endl;
    Account1.showBalance();
    Account2.showBalance();

    // Account 1
    cout<<"Please enter withdraw amount: ";
    cin>>withdrawAmount1;
    Account1.withdrawAmount(withdrawAmount1);
    cout<<"\nAmount "<<withdrawAmount1<<" Successful Deducted\n"<<"Transaction Successful"<<endl;
    Account1.showBalance();

    // Account 2
    cout<<"Please enter withdraw amount: ";
    cin>>withdrawAmount2;
    Account2.withdrawAmount(withdrawAmount2);
    cout<<"\nAmount "<<withdrawAmount2<<" Successful Deducted\n"<<"Transaction Successful"<<endl;
    Account2.showBalance();

    cout<<"---------------------------------------------------------------------"<<endl;
}
