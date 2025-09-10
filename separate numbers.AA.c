#include<stdio.h>
void main() {


    int num,digit;


     printf("ënter a number");
     scanf("%d",num);


     while(num > 0){
     digit = num%10;
     printf("d", digit);
     num = num / 10;

     }

     return 0;
 }
