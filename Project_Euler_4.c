/*!
 * @file Project_Euler_4.c
 * @author Christophe CAI
 * @brief Project Euler 4 : Largest palindrome product
 * @version 0.1
 * @date 2022-11-22
 */

#include <stdio.h>

#define TRUE 1
#define FALSE 0

int palindrome(int number){
    int reverseNumber=0;
    int tmp=number;
    while (tmp!=0){
        reverseNumber*=10;
        reverseNumber+=tmp%10;
        tmp/=10;
    }
    if (number==reverseNumber) return TRUE;
    else return FALSE;
}

int main(){
    int LargestPalindromeProduct=0;
    int PalindromeProduct;
    int loop1,loop2;
    for (loop1=999;loop1>=100;loop1--){
        for (loop2=999;loop2>=100;loop2--){
            if (palindrome(loop1*loop2)){
                PalindromeProduct=loop1*loop2;
                if (PalindromeProduct>LargestPalindromeProduct)
                    LargestPalindromeProduct=PalindromeProduct;
            }
        }
    }
    printf("Largest Palindome Product of two 3-digit numbers : %d\n",LargestPalindromeProduct);
}