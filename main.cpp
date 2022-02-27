

// Import libraries
#include <string>
#include <memory>
#include "Menu.h"
#include "InvestmentData.h"

//standard namespance (std)
using namespace std;

//entry point for app
int main()
{

  // Decleare function variables.
  int option;
  bool initialPass = true;
  InvestmentData* investmentData = new InvestmentData();
  Menu menu;

  // While the option is not  displayed the menu
  do
  {
    // Get the user input from the main menu
    option = menu.displayMainMenu();

    if (option == 1)
    {
      menu.collectInvestmentData(*investmentData);   //options 1-4 for user input
    }
    else if (option == 2)
    {
      menu.displayReport(*investmentData, false);
    }
    else if (option == 3)
    {
      menu.displayReport(*investmentData, true);
    }

    initialPass = false;

    // Exit the application when the option is none above.
  } while (option != 4);

  menu.displayExitScreen();
  delete investmentData;
  return 0;
}