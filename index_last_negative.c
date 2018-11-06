#include "index_last_negative.h"
int index_last_negative(int array[],int size){
    int index_last_negative_var;
    int i;
    for(i=size-1;i>=0;i--){
        if (array[i]<0){
            index_last_negative_var=i;
            break;
        }
    }
    return index_last_negative_var;
}
