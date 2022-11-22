/*!
 * @file Project_Euler_7.c
 * @author Christophe CAI
 * @brief Project Euler 7 : 10001st prime
 * @version 0.1
 * @date 2022-11-22
 */

#include <stdio.h>
#include <math.h>

#define TRUE 1
#define FALSE 0

int primeNumber(int number){
    int i;
    int divider=0;
    for (i=1;i<=sqrt(number);i++){
        if (number%i==0){
            divider++;
        }
    }
    if (divider==1) return TRUE;
    else return FALSE;
}

int main(){
    int counter=1;
    //Je compte déjà 2 comme nombre premier
    int number=3;
    while (counter<10001){
        if (primeNumber(number)) counter++;
        number+=2;
    }
    printf("10.001st Prime Number : %d\n",number-2);
}