/*!
 * @file Project_Euler_1.c
 * @author Christophe CAI
 * @brief Project Euler 1 : Multiples of 3 or 5
 * @version 0.1
 * @date 2022-11-21
 */

#include <stdio.h>

int main(){
    int sum=0;
    int i;
    for (i=3;i<1000;i++){
        if (i%3==0 || i%5==0){
            sum+=i;
        }
    }
    printf("Sum of Multiples of 3 or 5 until 1.000 : %d\n",sum);
}