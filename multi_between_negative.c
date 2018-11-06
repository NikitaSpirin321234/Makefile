#include "index_last_negative.h"
#include "index_first_negative.h"
#include "multi_between_negative.h"

int multi_between_negative(int array[],int size){
    int multi_between_negative_var = 1;
    int i;
    int index_first_negative_var=index_first_negative(array,size);
    int index_last_negative_var=index_last_negative(array,size);
    for(i=index_first_negative_var;i<index_last_negative_var;i++)
        multi_between_negative_var *= array[i];
    return multi_between_negative_var;
} 
