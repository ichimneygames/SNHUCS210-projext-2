//dont forget message in investment dats

#ifndef AIRGEAD_BANKING_SRC_COLUMN_H_
#define AIRGEAD_BANKING_SRC_COLUMN_H_

#include <string>


using namespace std;


class Column
{

  
private:
  string m_value;

public:
  
  Column();

  
  Column(int t_value);

  
  Column(double t_value);

  
  Column(string t_value);

  
  ~Column();

  
  void setValue(int t_value);

  
  void setValue(double t_value);

  
  void setValue(string t_value);

  
  string getValue();
};

#endif
