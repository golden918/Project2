#include <iostream>
#include <iomanip>
#include <cmath>
#include "InvestmentCalculator.h"

using namespace std;

double InvestmentCalculator::balanceWithMonthlyDeposit(double initialInvestment, double monthlyDeposit, double interestRate, int numberOfYears) {
    double balance = initialInvestment;
    double monthlyInterestRate = (interestRate / 100) / 12;
    double interestEarnedThisYear = 0.0;
    double monthlyInterest;

    for (int year = 1; year <= numberOfYears; year++) {
        interestEarnedThisYear = 0.0;
        for (int month = 0; month < 12; month++) {
            monthlyInterest = balance * monthlyInterestRate;
            interestEarnedThisYear += monthlyInterest;
            balance += monthlyInterest;
            balance += monthlyDeposit;
        }
        interestEarnedThisYear = round(interestEarnedThisYear * 100.0) / 100.0;
        balance = round(balance * 100.0) / 100.0;
        printDetails(year, balance, interestEarnedThisYear);
    }
    return round(balance * 100.0) / 100.0;
}

double InvestmentCalculator::calculateBalanceWithoutMonthlyDeposit(double initialInvestment, double interestRate, int numberOfYears) {
    double balance = initialInvestment;
    double monthlyInterestRate = (interestRate / 100) / 12;
    double interestEarnedThisYear;
    double monthlyInterest;

    for (int year = 1; year <= numberOfYears; year++) {
        interestEarnedThisYear = 0.0;
        for (int month = 0; month < 12; month++) {
            monthlyInterest = balance * monthlyInterestRate;
            balance += monthlyInterest;
            interestEarnedThisYear += monthlyInterest;
        }
        printDetails(year, round(balance * 100.0) / 100.0, round(interestEarnedThisYear * 100.0) / 100.0);
    }
    return balance;
}

void InvestmentCalculator::printDetails(int year, double yearEndBalance, double interestEarned) {
    cout << year << "\t\t$" << fixed << setprecision(2) << yearEndBalance << "\t\t$" << fixed << setprecision(2) << interestEarned << endl;
}
