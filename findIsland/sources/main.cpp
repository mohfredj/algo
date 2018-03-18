#include <iostream>

using namespace std;
#include "countIslands.h"

int main()
{
    const int numRow = ROW_NUMBERS;
    const int numColumn = COLUMN_NUMBERS;

    const int inputArray[numRow][numColumn]={
          {0,1,1,1,1,1,1,1,0,0,0},
          {0,1,0,0,0,0,0,1,0,0,0},
          {0,1,0,0,1,0,0,1,0,1,0},
          {0,1,0,0,1,1,0,1,0,0,1},
          {0,1,0,0,0,1,0,0,0,1,0},
          {0,0,0,0,0,1,1,1,0,1,1},
          {0,1,1,1,0,0,0,1,0,1,0},
          {0,0,1,1,1,0,0,0,0,0,0}
        };

    /*const int inputArray[numRow][numColumn]={
          {0,1,1,1},
          {0,1,0,0},
          {0,1,0,0},
          {0,1,0,0}
        };
*/
    cout <<"**************************************"<< endl;
    for(int i=0; i<numRow; i++){
        for(int j=0; j<numColumn; j++){
            cout << inputArray[i][j] << "\t";
        }
            cout << endl;
    }

    cout <<"**************************************" << endl;

    CountIslands countIsland(inputArray,numRow,numColumn);
    int numberIsland =  countIsland.count();
    cout << " Number of islands is: ##########"<< numberIsland<<"#########" <<endl;

    return 0;
}
