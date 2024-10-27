#ifndef INVESTMENTCALCULATOR_H
#define INVESTMENTCALCULATOR_H

class InvestmentCalculator {
public:
    double balanceWithMonthlyDeposit(double initialInvestment, double monthlyDeposit, double interestRate, int numberOfYears);
    double calculateBalanceWithoutMonthlyDeposit(double initialInvestment, double interestRate, int numberOfYears);
    void printDetails(int year, double yearEndBalance, double interestEarned);
};

#endif

