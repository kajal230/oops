#include <iostream>
#include <string>
using namespace std;
class Customer{
    
    private:
    string accountNumber;
    double balance;
    bool isActive;
    public:
    string name;
    
    Customer(){
        balance=0.0;
        isActive=true;
    }
    void setAccountno(string accno){
        accountNumber=accno;
    }
    void deposit(double amount){
        if( amount>0){
            balance+=amount;
        }
    }
     void withdraw(double amount){
        if(amount<=balance && amount>0){
            balance-=amount;
        }
    }
    void transfer(double amount, Customer &targetAccount){
        if(amount<=balance && amount>0){
            targetAccount.deposit(amount);

        }
    }
    void printDetails(string name, string accountNumber, double balance){
    
        cout<<"Customer Name: "<<name<<endl;
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Balance: "<<balance<<endl;
    }

};
int main(){
    Customer cust1;
    Customer cust2;
cust1.name="kajal";
cust2.name="rahul";
    cust1.setAccountno("123456789");
    cust1.deposit(5000);
    cust1.withdraw(2000);
    cust1.transfer(1000,cust2);
    cust1.printDetails(cust1.name, "123456789", 2000);
    cust2.printDetails(cust2.name, "000000000", 1000);
    return 0;
}