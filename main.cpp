
#include<stdio.h>
#include<conio.h>
#include<iostream>


using namespace std;

class bank {

    char name[100],address[100]; 
    char account_type;
    long long mobile,account_balance;

    public:
        void new_account();
        void deposit_money();
        void withdraw_money();
        void check_balance();
        void check_account_details();
};

// (1) NEW ACCOUNT OPENING 

void bank :: new_account() {

    cout<<"Enter your name : ";
    cin.ignore();
    cin.getline(name,100);

    cout<<"Enter your address : ";
    cin.ignore();
    cin.getline(address,100);

    cout<<"Enter your mobile no. : ";
    cin>>mobile;

    cout<<"What type of account you want to open : Savings (s) or Current (c) : ";
    cin>>account_type;

    cout<<"Deposit some amount for account opening : ";
    cin>>account_balance;

    cout<<"Your account is created !"<<endl;

    cout<<"-------------------------------"<<endl;
}


// (2) DEPOSIT MONEY 

void bank :: deposit_money(){
    
    long long deposit_money;
    cout<<"Enter the deposited amount : ";
    cin>>deposit_money;

    account_balance += deposit_money;
    
    cout<<"Current account balance : "<<account_balance<<endl;

    cout<<"-------------------------------"<<endl;
}


// (3) WITHDRAW MONEY

void bank :: withdraw_money(){

    long long withdraw_money;
    cout<<"Enter the withdrawal amount  : ";
    cin>>withdraw_money;

    account_balance -= withdraw_money;
    
    cout<<"Current account balance : "<<account_balance<<endl;

    cout<<"-------------------------------"<<endl;

}


// (4) CHECK BALANCE

void bank :: check_balance(){

    cout<<"Current account balance : "<<account_balance<<endl;

    cout<<"-------------------------------"<<endl;
}


// (5) CHECK ACCOUNT DETAILS

void bank :: check_account_details(){

    cout<<"Account holder name : "<<name<<endl;
    cout<<"Address : "<<address<<endl;
    cout<<"Mobile no. : "<<mobile<<endl;
    cout<<"Account type : ";

    if(account_type=='c' or account_type=='C') cout<<"Current"<<endl;

    if(account_type=='s' or account_type=='S') cout<<"Savings"<<endl;

    cout<<"Current account balance : "<<account_balance<<endl;
    cout<<"-------------------------------"<<endl;
}




int main(){

    int choice,x;
    bank obj;

do{
    cout<<"(1) Create a new account "<<endl;
    cout<<"(2) Deposit money "<<endl;
    cout<<"(3) Withdraw money "<<endl;
    cout<<"(4) Check account balance "<<endl;
    cout<<"(5) Check account details "<<endl;
    cout<<"(6) Exit "<<endl;

    cout<<"-------------------------------"<<endl;

    
    cout<<"Select the option from the above : ";
    cin>>choice;

    switch(choice){
        case 1:
            cout<< "(1) Create a new account \n ";
            obj.new_account();
            break;

        case 2:
            cout<< "(2) Deposit money \n ";
            obj.deposit_money();
            break;

        case 3:
            cout<< "(3) Withdraw money \n ";
            obj.withdraw_money();
            break;

        case 4:
            cout<< "(4) Check account balance \n ";
            obj.check_balance();
            break;

        case 5:
            cout<< "(5) Check account details \n ";
            obj.check_account_details();
            break;

        case 6:
            if(choice==6) exit(1);

        default : 
            cout<<"Kya kar raha tu ! "<<endl;
    }

    cout<<"If you want to continue, then press 'Y' : "<<endl;
    cout<<"If you want to exit, then press 'N' : "<<endl;

    x = getch();
   

    if(x=='n' or x=='N') exit(0);

} while(x=='Y' or x=='y');


    getch();
    return 0;
}