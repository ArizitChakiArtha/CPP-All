#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string owner;
    double balance;

public:
    BankAccount(string ownerName, double initialBalance)
        : owner(move(ownerName)), balance(initialBalance) {}

    void deposit(double amount) {
        if (amount > 0) balance += amount;
    }

    bool withdraw(double amount) {
        if (amount <= 0 || amount > balance) return false;
        balance -= amount;
        return true;
    }

    void display() const {
        cout << "Owner: " << owner << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account("Koushik", 5000);
    account.deposit(1500);
    account.withdraw(700);
    account.display();
    return 0;
}
