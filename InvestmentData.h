

#ifndef AIRGEAD_BANKING_SRC_INVESTMENT_DATA_H_
#define AIRGEAD_BANKING_SRC_INVESTMENT_DATA_H_

//declares class
class InvestmentData
{

  //class members and methods
private:
  //initial investmentamount
  double m_initailInvestmentAmount;

  //monthly deposit
  double m_monthlyDeplositAmount;

  //yearly interest rate
  double m_annualInterestRate;

  //years
  int m_years;

  //
public:
  //new construct
  InvestmentData();

  
  ~InvestmentData();

  //get ammount
  double getInitialInvestmentAmount();

  //get monthly amount
  double getMonthlyDepositAmount();

  //get yearly interest
  double getAnnualInterestRate();

  //get years
  int getYears();

  
  void setInitialInvestmentAmount(double t_initialInvestmentAmount);

  
  void setMonthlyDepositAmount(double t_monthlyDeplositAmount);

  
  void setAnnualInterestRate(double t_annualInterestRate);

  
  void setYears(int years);

  
  double calculateMonthlyInterest(double t_openingBalance);

  
  void calculateYearlyBalance(double & t_yearlyInterestAmount, double & t_openingBalance, bool t_useMonthlyDeposit);
};

#endif