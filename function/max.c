#include "max.h"
int max(int array[5][5]) {
    int max = -1000000;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if(array[i][j] > max) 
                max = array[i][j];
        }
    }      
    return max;
}
