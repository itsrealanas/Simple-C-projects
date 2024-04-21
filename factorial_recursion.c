#include<stdio.h>
int fact(int num){
  if(num == 0 || num == 1 ){
    return 1;
  }
  else {
    return ( num * fact(num -1));
  }
}
int main (){
  int num, i;
  printf("Enter number to get factorial of : ");
  scanf("%d",&num);
  printf("Factorial of %d is : %d ",num , fact(num));
}
