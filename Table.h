//dont forget message in investment dats

#ifndef AIRGEAD_BANKING_SRC_TABLE_H_
#define AIRGEAD_BANKING_SRC_TABLE_H_

#include <vector>
#include <string>
#include <iostream>
#include <iomanip>
#include "Column.h"
#include "Row.h"

// Use the standard namespance (std)
using namespace std;

//table class
class Table
{

  //ENCAPSULATE THIS JAZZ
private:
  int m_tableWidth;
  int m_columnWidth;
  int m_rowPrefixSize;
  int m_rowPostfixSize;
  char m_headerDivChar;
  char m_bodyDivChar;
  char m_columnSeperator;
  char m_filler;
  Row m_header;
  vector<Row> m_rows;
  
  //row div
  void printDiv(bool t_header);

  //to print or not to print
  void printRow(bool t_header, Row t_row);

  //print
  void printHeader();

  //print
  void printBody();

public:
  //construct of new table
  Table();

  //destory
  ~Table();

  //header
  void addHeader(Column t_columns[]);

  //add
  void addRow(Row t_row);

  //create row
  void addRow(Column *t_columns);

  //display our table
  void display();

  //it clears
  void clear();
};

#endif