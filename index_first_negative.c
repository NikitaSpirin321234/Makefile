#include "index_first_negative.h"

int index_first_negative(int array[],int size){
    int index_first_negative_var;
    int i;
    for(i=0;i<size;i++){
        if (array[i]<0){
            index_first_negative_var=i;
            break;
        }
    }
return index_first_negative_var;
}
