/*!
 * @file Project_Euler_8.c
 * @author Christophe CAI
 * @brief Proejct Euler 8 : Largest product in a series
 * @version 0.1
 * @date 2022-11-22
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int LargestProduct=1;
    int Product;
    //number = fopen("C:\\Users\\c-chr\\Documents\\GitHub\\Project-Euler\\Project_Euler_8.txt");
    int i;
    for (i=1;i<1000-13;i++){
        Product=1;
        if (Product>LargestProduct) LargestProduct=Product;
        Product=1;
    }
}