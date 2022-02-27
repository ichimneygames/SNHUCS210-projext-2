//dont forget message in investment dats

#ifndef AIRGEAD_BANKING_SRC_MENU_H_
#define AIRGEAD_BANKING_SRC_MENU_H_

// Include class dependencies
#include <string>
#include "InvestmentData.h"

// Use the standard namespance (std)
using namespace std;

class Menu
{//a whole alot of voids for data 

private:
  
  void collectUserInput(string userPrompt, int &value);

  
  void collectUserInput(string userPrompt, double &value);

  
  void displayContinueMenu();

public:
  
  int displayMainMenu();

  
  void displayReport(InvestmentData &investmentData, bool t_useMonthlyDeposit);

  
  void displayExitScreen();

  
  void collectInvestmentData(InvestmentData &investmentData);
};

#endif