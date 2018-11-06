#include "index_last_negative.h"
#include "index_first_negative.h"
#include "multi_before_and_after_negative.h"

int multi_before_and_after_negative(int array[],int size){
    int multi_before_and_after_negative_mul = 1;
    int i;
    int index_first_negative_var=index_first_negative(array,size);
    int index_last_negative_var=index_last_negative(array,size);
    for(i=0;i<index_first_negative_var;i++)
        multi_before_and_after_negative_mul *= array[i];
    for(i=index_last_negative_var;i<size;i++)
        multi_before_and_after_negative_mul *= array[i];
    return multi_before_and_after_negative_mul;
}
