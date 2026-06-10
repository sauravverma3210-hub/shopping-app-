#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;   // hidden data

public:
    void setBalance(double b) {
        if (b >= 0)
            balance = b;
    }

    double getBalance() {
        return balance;
    }

    void deposit(double amount) {
        balance += amount;
    }
};

int main() {
    BankAccount acc;

    acc.setBalance(1000);
    acc.deposit(500);

    cout << "Balance: " << acc.getBalance();

    return 0;
}