#include "countIslands.h"

CountIslands::CountIslands(const int arrayOfIslands[ROW_NUMBERS][COLUMN_NUMBERS],
                           const int rowSize, const int columnSize)
{
    for(int i=0; i<rowSize; i++){
        for(int j=0; j<columnSize; j++){
            m_findedIsland[i][j]= arrayOfIslands[i][j] ;
        }
    }

}
int CountIslands::count(){
    m_numberIsland = 0;

    for(int i=0; i<ROW_NUMBERS; i++){
        for(int j=0; j<COLUMN_NUMBERS; j++){
            if(processCountingIslands(i,j)){
                m_numberIsland++;
            }
        }
    }

    return m_numberIsland;
}

bool CountIslands::processCountingIslands(const int line, const int column){

    if (    line >= ROW_NUMBERS ||
            column >= COLUMN_NUMBERS ||
            m_findedIsland[line][column] <= 0 )
    {
            return false;
    }else if (m_findedIsland[line][column] == 1){
            m_findedIsland[line][column] = -1;
            processCountingIslands(line+1, column);
            processCountingIslands(line, column+1);

    }

    return true;

}
