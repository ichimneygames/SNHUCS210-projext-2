//dont forget message in investment dats

#include "Row.h"

using namespace std;

//our row
Row::Row(){
  this->m_columns.clear();
}




//rows




Row::~Row()
{
  this->m_columns.clear();
}

//add column and row
void Row::addColumn(Column t_column)
{
  this->m_columns.push_back(t_column);
}


int Row::getLength()
{
  return this->m_columns.size();
}


Column Row::getColumn(int i)
{
  Column c;

  if (i < this->m_columns.size())
  {
    c = this->m_columns.at(i);
  }

  return c;
}


Column *Row::getColumns()
{

  Column *columns = new Column[this->m_columns.size()];
  for (int i = 0; i < this->m_columns.size(); i++)
  {
    columns[i] = this->m_columns.at(i);
  }

  return columns;
}

//remove
void Row::clear()
{

  for (int i = 0; i < this->m_columns.size(); i++)
  {
    this->m_columns.clear();
  }

  return;
}