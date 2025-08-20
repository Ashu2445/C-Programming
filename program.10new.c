#include<stdio.h>
void main(){
      int a,b;

      printf("enter a: ");
      scanf("%d" ,&a);

      printf("enter b: ");
      scanf("%d" ,&b);

      if(a>b){
        printf("%d is the largest and %d is th smallest" ,a,b);
      }
      else{
        printf("%d is the largest and %d is the smallest" ,b,a);
      }

      return 0;
}
