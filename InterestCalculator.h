#pragma once
#include <iostream>
#include <iomanip>
using namespace std;

class InterestCalculator
{
public:
	double calculateBalanceWithoutMonthlyDeposit(double initialInvestment, double interestRate, int numberOfYears);

	double balanceWithMonthlyDeposit(double initialInvestment, double monthlyDeposit, double interestRate, int numberOfYears);
	void printDetails(int year, double yearEndBalance, double interestEarned);
};