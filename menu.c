#include <stdio.h>

#include "index_first_negative.h"
#include "index_last_negative.h"
#include "multi_between_negative.h"
#include "multi_before_and_after_negative.h"

#define N 20
int main(){
    int length = 0;
    int value, answer;
    char flag;
    int mass[N];
    int i;
    scanf("%d", &value);
    for (i=0;i<N && flag!='\n';i++){
        scanf("%d%c", &mass[i], &flag);
        length++;
    }
    switch(value){
        case 0:
            answer=index_first_negative(mass,length);
            break;
        case 1:
            answer=index_last_negative(mass,length);
            break;
        case 2:
            answer=multi_between_negative(mass,length);
            break;
        case 3:
            answer=multi_before_and_after_negative(mass,length);
            break;
        default:
            printf("Данные некорректны\n");
        return 0;
    }
    printf("%d\n", answer);
    return 0;
}
