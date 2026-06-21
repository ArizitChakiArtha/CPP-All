#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    explicit BankAccount(double initialBalance) : balance(initialBalance) {}

    void deposit(double amount) {
        if (amount > 0) balance += amount;
    }

    bool withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            return true;
        }
        return false;
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount account(1000);
    account.deposit(500);
    account.withdraw(300);
    cout << "Balance: " << account.getBalance() << endl;
    return 0;
}
