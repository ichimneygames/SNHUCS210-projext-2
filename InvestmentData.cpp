

// Import libraries
#include <iostream>
#include <math.h>
#include "InvestmentData.h"

//new contrusct
InvestmentData::InvestmentData()
{
  this->m_initailInvestmentAmount = 0.0;
  this->m_monthlyDeplositAmount = 0.0;
  this->m_annualInterestRate = 0.0;
  this->m_years = 0;
}


InvestmentData::~InvestmentData()
{
  this->m_initailInvestmentAmount = 0.0;
  this->m_monthlyDeplositAmount = 0.0;
  this->m_annualInterestRate = 0.0;
  this->m_years = 0;
}

//get investment ammount from user input 
double InvestmentData::getInitialInvestmentAmount()
{
  return this->m_initailInvestmentAmount;
}

//userinput for monthyl data
double InvestmentData::getMonthlyDepositAmount()
{
  return this->m_monthlyDeplositAmount;
}

//annual intreerst 
double InvestmentData::getAnnualInterestRate()
{
  return this->m_annualInterestRate;
}

//years
int InvestmentData::getYears()
{
  return this->m_years;
}

//helps set data
void InvestmentData::setInitialInvestmentAmount(double t_initialInvestmentAmount)
{
  this->m_initailInvestmentAmount = t_initialInvestmentAmount;
}

//set monthly data
void InvestmentData::setMonthlyDepositAmount(double t_monthlyDepositAmount)
{
  this->m_monthlyDeplositAmount = t_monthlyDepositAmount;
}

//our interest rate
void InvestmentData::setAnnualInterestRate(double t_annualInterestRate)
{
  this->m_annualInterestRate = t_annualInterestRate;
}


void InvestmentData::setYears(int t_years)   ///set years
{
  this->m_years = t_years;
}

//calculations
double InvestmentData::calculateMonthlyInterest(double t_openingBalance)
{
  // Declare and Initialize the monthlyInterestAmount variable
  double monthlyInterestAmount = 0.0;

  //  Only calculate the interest IFF the interest rate is > 0% else return 0.
  if (fabs(this->m_annualInterestRate) > 0.0001)
  {
    // Calculate the monthly interest rate.
    monthlyInterestAmount = t_openingBalance * ((this->m_annualInterestRate / 100.0) / 12.0);
  }

  // Return the calculated monthly interest amount.
  return monthlyInterestAmount;
}

//
void InvestmentData::calculateYearlyBalance(double &t_yearlyInterestAmount, double & t_openingBalance, bool t_useMonthlyDeposit)
{
  // Declare function variables
  double monthlyInterest;

  // Initialze the total interest to 0 at the beginning of each year.
  t_yearlyInterestAmount = 0.0;

  // Loop through all the months in the year to calculate
  // the monthly interest and balance.
  for (int currentMonth = 0; currentMonth < 12; ++currentMonth)
  {

    // Get the starting balance.
    if (t_useMonthlyDeposit)
    {
      t_openingBalance += this->getMonthlyDepositAmount();
    }

    // Calculate the monthly interest amount
    monthlyInterest = this->calculateMonthlyInterest(t_openingBalance);

    // Calculate the year to date interest
    t_yearlyInterestAmount += monthlyInterest;

    // Calculate the year to date balance
    t_openingBalance += monthlyInterest;
  }

  return;
}

//delete before turning in... remember sleep before 7