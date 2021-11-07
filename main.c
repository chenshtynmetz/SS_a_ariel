#include <stdio.h>
#include "NumClass.h"
#include <math.h>

int main(void){
    int x, y;
    scanf("%d %d", &x, &y);
    if(x > y){
        int temp= x;
        x= y;
        y= temp;
    }
    printf("The Armsrong numbers are:");
    for(int i=x; i<=y; i++){
        int ans= isArmstrong(i);
        if(ans == 1){
            printf("%d", i);
            printf(" ,");
        }
    } printf("\nThe Palindromes are:");
    for(int i=x; i<=y; i++){
        int ans= isPalindrome(i);
        if(ans == 1){
            printf("%d", i);
            printf(" ,");
        }
    }
    printf("\nThe Prime numbers are:");
    for(int i=x; i<=y; i++){
        int ans= isPrime(i);
        if(ans == 1){
            printf("%d", i);
            printf(" ,");
        }
    }
     printf("\nThe Strong numbers are:");
    for(int i=x; i<=y; i++){
        int ans= isStrong(i);
        if(ans == 1){
            printf("%d", i);
            printf(" ,");
        }
    }
    return 0;
}