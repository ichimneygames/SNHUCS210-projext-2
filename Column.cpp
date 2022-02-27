//dont forget message in investment dats

// Include class dependencies
#include <sstream>
#include <iomanip>
#include "Column.h"

// Use the standard namespance (std)
using namespace std;

//new column
Column::Column()
{
  this->m_value = "";
}
//all below helps set up new column and displays
//a very confusing process

Column::Column(int t_value)
{
  this->m_value = to_string(t_value);
}


Column::Column(double t_value)
{
  this->setValue(t_value);
}


Column::Column(string t_value)
{
  this->m_value = t_value;
}


Column::~Column()
{
  this->m_value = "";
}


void Column::setValue(int t_value)
{
  this->m_value = to_string(t_value);
}
//notes on phone for tomorrow

void Column::setValue(double t_value)
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
  this->m_value = streamObj.str();
}


void Column::setValue(string t_value)
{
  this->m_value = t_value;
}


string Column::getValue()
{
  return this->m_value;
}