//dont forget message in investment dats

#ifndef AIRGEAD_BANKING_SRC_FORMATTER_H_
#define AIRGEAD_BANKING_SRC_FORMATTER_H_

// Include class dependencies
#include <sstream>
#include <iomanip>
#include "Column.h"

// Use the standard namespance (std)
using namespace std;


const string toString(double t_value)
{

  // Create an output string stream
  ostringstream streamObj;

  // Set Fixed -Point Notation
  streamObj << fixed;

  // Set precision to 2 digits
  streamObj << setprecision(2);

  //Add double to stream
  streamObj << t_value;

  // Get string from output string stream
  return streamObj.str();
}


#endif