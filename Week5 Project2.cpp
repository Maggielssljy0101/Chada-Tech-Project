// Week5 Project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "InterestCalculator.h"


int main()
{
    int initialInvestment;
    int compoundMonthlyInterest;
    double interestRate;
    int numberOfYears;
    double endBalance;
    char typeOfInvestment;
    double monthlyDeposit;
    cout << "Do you want to calculate with mounthly deposit? y/n";
    cin >> typeOfInvestment;
    
    if (typeOfInvestment == 'n') {
        
        
        std::cout << "How much do you want to start invest?\n";
        cin >> initialInvestment;
        std::cout << "What is the interest rate?";
        cin >> interestRate;
        cout << "How many years you want to invest?";
        cin >> numberOfYears;


        InterestCalculator calculator;
        endBalance = calculator.calculateBalanceWithoutMonthlyDeposit(initialInvestment, interestRate, numberOfYears);
        return 0;
    }
    else if (typeOfInvestment =='y') {
        cout << "How much you want to put in every month";
        cin >> monthlyDeposit; 
        std::cout << "How much do you want to start invest?\n";
        cin >> initialInvestment;
        std::cout << "What is the interest rate?";
        cin >> interestRate;
        cout << " How many years you want to invest?";
        cin >> numberOfYears;
        InterestCalculator calculator;
        endBalance = calculator.balanceWithMonthlyDeposit(initialInvestment, monthlyDeposit, interestRate, numberOfYears);
        return 0;
    }

    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
