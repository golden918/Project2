#include <iostream>
#include "InvestmentCalculator.h"

using namespace std;

int main() {
    InvestmentCalculator calculator;

    // User inputs
    double initialInvestment, monthlyDeposit, interestRate;
    int numberOfYears;

    cout << "Enter initial investment amount: $";
    cin >> initialInvestment;
    cout << "Enter monthly deposit amount: $";
    cin >> monthlyDeposit;
    cout << "Enter annual interest rate (in percentage): ";
    cin >> interestRate;
    cout << "Enter number of years: ";
    cin >> numberOfYears;

    cout << "\nBalance and Interest Without Additional Monthly Deposits\n";
    cout << "========================================================\n";
    cout << "Year\tYear End Balance\tYear End Earned Interest\n";
    cout << "--------------------------------------------------------\n";
    calculator.calculateBalanceWithoutMonthlyDeposit(initialInvestment, interestRate, numberOfYears);

    cout << "\nBalance and Interest With Additional Monthly Deposits\n";
    cout << "========================================================\n";
    cout << "Year\tYear End Balance\tYear End Earned Interest\n";
    cout << "--------------------------------------------------------\n";
    calculator.balanceWithMonthlyDeposit(initialInvestment, monthlyDeposit, interestRate, numberOfYears);

    return 0;
}
