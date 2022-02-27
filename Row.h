//dont forget message in investment data.cpp

#ifndef AIRGEAD_BANKING_SRC_ROW_H_
#define AIRGEAD_BANKING_SRC_ROW_H_

#include <vector>
#include "Column.h"

// Use the standard namespance (std)
using namespace std;


class Row
{

  
private:
  vector<Column> m_columns;

public:
  
  
  Row();

  
  ~Row();

 
  void addColumn(Column t_column);

  
  int getLength();

  
  Column getColumn(int i);

  
  Column * getColumns();

  
  void clear();
};

#endif