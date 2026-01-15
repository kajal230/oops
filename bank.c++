class Customer{
    public:
    string name;
    private:
    string accountNumber;
    double balance;
    bool isActive;
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
    void printDetails(){
        cout<<"name:"<<name<<endl;
         cout<<"accountno:"<<accountNumber<<endl;
          cout<<"current balance :"<<balance<<endl;
          

    }

};
int main(){
    Customer cust1;
    cust1.name="kajal";
    cust1.accountNumber="124335345";
    cust1.deposit(5000);
    cust1.printDetails();
    return 0;
}