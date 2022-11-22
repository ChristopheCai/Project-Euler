/*!
 * @file Project_Euler_3.c
 * @author Christophe CAI
 * @brief Project Euler 3 : Largest prime factor
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
    int i=2;
    int LargestPrimeFactor=1;
    long long number=600851475143;
    while (number>1){
            if (primeNumber(i)){
                while (number%i==0){
                    number=number/i;
                    LargestPrimeFactor=i;
                }
            }                    
        if (i==2) i++;
        else i+=2;
    }
    printf("Largest Prime Factor of %d is %d\n",number,LargestPrimeFactor);
}