#ifndef COUNTISLANDS_H
#define COUNTISLANDS_H

#include <iostream>

#define ROW_NUMBERS      8
#define COLUMN_NUMBERS   11

class CountIslands
{
public:
    //FIXME : use pointer in argument instead of array 2 dimensions
    CountIslands(const int arrayOfIlands[ROW_NUMBERS][COLUMN_NUMBERS], const int, const int);
    int count() ;
 private:
    bool processCountingIslands(const int,const int);

private:
  int m_findedIsland [ROW_NUMBERS][COLUMN_NUMBERS];
  int m_numberIsland;
};

#endif // COUNTISLANDS_H
