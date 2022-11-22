/*!
 * @file Project_Euler_5.c
 * @author Christophe CAI
 * @brief Project Euler 5 : Smallest multiple
 * @version 0.1
 * @date 2022-11-22
 */

#include <stdio.h>

int main(){
    int SmallestNumber=20;
    int loop=1;
    int dividers=0;
    int i;
    while (loop==1){
        for (i=1;i<=20;i++){
            if (SmallestNumber%i==0){
                dividers++;
            }
        }
        if (dividers==20) loop=0;
        else SmallestNumber++,dividers=0;
    }
    printf("Smallest Multiple of 1 to 20 : %d\n",SmallestNumber);
}