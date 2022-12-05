#include<iostream>
#include<string>
using namespace std;

class account
{
    string name;
    int acc;
    string bankname;
    int balance;
    int merge;

    public:
        account();
        account(string , int ,string, int);
        void input();
        void withdraw();
        void interest();
        void penalty();
        void display();
        void display1();
        
        account operator+(account ob);
};
account::account()
{
    name = ' ';
    acc = 0 ;
    bankname = ' ';
    balance = 0;
}
account::account(string str, int x,string str1, int y)
{
    name = str;
    acc = x ;
    bankname = str1;
    balance = y;
}
void account::input()
{
    cout<<"taking some information of customer"<<endl;
    cout<<"customer name:"<<endl;
    cin>>name;
    cout<<"customer acc no:"<<endl;
    cin>>acc;
    cout<<"account name "<<endl;
    cin>>bankname;
    cout<<"acc balance:"<<endl;
    cin>>balance;
}
void account::withdraw()
{
    int amount;
    cout<<"enter amount that you want to withdraw:"<<endl;
    cin>>amount;
    if(amount > balance)
    {
        cout<<"can't withdraw";
    }
    else
    {
        balance=balance-amount;
    }
}
void account::interest()
{
    cout<<"after adding 3% interest"<<endl;
    balance=balance+(balance*3/100);
}
void account::penalty()
{   cout<<" if your balance is less than 500 then the penalty charge will be imposed  "<<endl;
    if(balance<500)
    {
        cout<<"the 100 penalty charge will be imposed "<<endl;
        balance = balance-100;
    }
}
account account:: operator+(account ob)
{
   account res;
   res.merge= ob.balance+this->balance;
   return res;
}
void account::display()
{
    cout<<endl;
    cout<<"the name is "<<name<<endl;
    cout<<"the account number is "<<acc<<endl;
    cout<<"the account name is "<<bankname<<endl;
    cout<<"your current balance= "<<balance<<endl;
    cout<<"after merging "<<endl<<merge;
}
void account::display1()
{
    cout<<"after merging "<<endl<<merge;
}
int main()
{
    account ob; 
    account ob2;
    ob.input();
    ob2.input();
    ob.withdraw();
    ob.interest();
    ob.penalty();
    ob.display();
    account res = ob+ob2;
    res.display1();
    return 0;   
}