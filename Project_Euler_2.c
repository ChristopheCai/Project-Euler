/*!
 * @file Project_Euler_2.c
 * @author Christophe CAI
 * @brief Project Euler 2 : Even Fibonacci numbers
 * @version 0.1
 * @date 2022-11-21
 */

#include <stdio.h>

int main(){
    int sum=0;
    int precedent=1,current=2;
    int tmp;
    int i;
    while (current<4000000){
        tmp=current;
        if (current%2==0){
            sum+=current;
        }
        current+=precedent;
        precedent=tmp;
    }
    printf("Sum of Even Fibonacci numbers until 4.000.000 : %d\n",sum);
}