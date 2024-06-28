#include "InterestCalculator.h"


double InterestCalculator::calculateBalanceWithoutMonthlyDeposit(double initialInvestment, double interestRate, int numberOfYears) {
    double compoundMonthlyInterest = (interestRate / 100) / 12;
    double interestAmount = 0.00;
    double yearEndBalance = initialInvestment;
    double yearEndInterest = 0.00;

    if (numberOfYears <= 0) {
        printDetails(1, initialInvestment, yearEndInterest);
        return  initialInvestment;
    }

    for (int i = 1; i <= numberOfYears; i++) {
        for (int j = 0; j < 12; j++) {
            interestAmount = yearEndBalance * compoundMonthlyInterest;
            yearEndInterest = yearEndInterest + interestAmount;
            yearEndBalance = yearEndBalance + interestAmount;
        }

        printDetails(i, yearEndBalance, yearEndInterest);

        yearEndInterest = 0.00f;
    }
    return yearEndBalance;
}
double InterestCalculator::balanceWithMonthlyDeposit(double initialInvestment, double monthlyDeposit, double interestRate, int numberOfYears) {
    double compoundMonthlyInterest = (interestRate / 100) / 12;
    double interestAmount = 0.00;
    double yearEndBalance = initialInvestment;
    double yearEndInterest = 0.00;

    if (numberOfYears <= 0) {
        printDetails(1, initialInvestment, yearEndInterest);
        return initialInvestment;
    }

    for (int i = 1; i <= numberOfYears; i++) {
        for (int j = 0; j < 12; j++) {
            interestAmount = yearEndBalance * compoundMonthlyInterest;
            yearEndInterest = yearEndInterest + interestAmount;
            yearEndBalance = yearEndBalance + monthlyDeposit +  interestAmount;
        }

        printDetails(i, yearEndBalance, yearEndInterest);

        yearEndInterest = 0.00f;
    }
    return yearEndBalance;
    }

void InterestCalculator::printDetails(int year, double yearEndBalance, double interestEarned) {
    cout << "Year\t\tYear End Balance\t\tInterest Earned\n" << endl;
    cout << fixed << setprecision(2);


    cout << year << "\t\t" << yearEndBalance << "\t\t" << interestEarned << endl;
}