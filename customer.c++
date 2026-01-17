#include <iostream>
#include <string>
using namespace std;
class Customer{
    string name;
    int accountno,balance;
    static int totalCustomers;
    public:
    Customer(string name, int accno, int bal){
        this->name=name;
        this->accountno=accno;
        this->balance=bal;
        totalCustomers++;
    }
    void display(){
        cout<<name<<" "<<accountno<<" "<<balance<<" "<<totalCustomers<<endl;
      
    }
};
    int Customer::totalCustomers=0;
    

int main(){
    Customer cust1("Alice", 1001, 5000);
    Customer cust2("Bob", 1002, 3000);
    cust1.display();
    cust2.display();
    Customer cust3("Bob", 1002, 3000);
    cust3.display();

   
}