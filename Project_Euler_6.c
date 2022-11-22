/*!
 * @file Project_Euler_6.c
 * @author Christophe CAI
 * @brief Project Euler 6 : Sum square difference
 * @version 0.1
 * @date 2022-11-22
 */

#include <stdio.h>

int main(){
    int SumOfSquare=0;
    int SquareOfSum=0;
    int i;
    for (i=1;i<=100;i++) SumOfSquare+=i*i;
    for (i=1;i<=100;i++) SquareOfSum+=i;
    SquareOfSum=SquareOfSum*SquareOfSum;
    printf("Sum Square Difference : %d\n",abs(SumOfSquare-SquareOfSum));
}