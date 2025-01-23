#include <iostream>
#include <string>
using namespace std;
class BankAccount {
private:
    string account_number;
    string customer_name;
    double balance;

public:
    // Parameterized constructor to initialize the account details and balance
    BankAccount(string acc_number, string cust_name, double initial_balance = 5000) {
        account_number = acc_number;
        customer_name = cust_name;
        balance = initial_balance;
    }
// Method to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: Rs " << amount << endl;
        } else {
            cout << "Invalid deposit amount" << endl;
        }
    }
// Method to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: Rs " << amount << endl;
        } else {
            cout << "Invalid or insufficient funds for withdrawal" << endl;
        }
    }
// Method to check balance
    void check_balance() const {
        cout << "Account Balance: Rs " << balance << endl;
    }
// Method to display account details
    void display_account_details() const {
        cout << "Account Number: " << account_number << endl;
        cout << "Customer Name: " << customer_name << endl;
        cout << "Balance: Rs " << balance << endl;
    }
};
int main() {
    // Creating a BankAccount object with initial balance of Rs 5000
    BankAccount account("123456789", "John Doe");

    // Displaying initial account details
    account.display_account_details();

    // Performing deposit, withdrawal, and balance check operations
    account.deposit(2000);
    account.withdraw(1500);
    account.check_balance();
    return 0;
}
