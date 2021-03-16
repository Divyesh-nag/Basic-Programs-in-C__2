#include<stdio.h>
int main(){
  int firstNo;
  int secondNo;
  printf("Enter first number : ");
  scanf("%d",&firstNo);
  printf("Enter second number : ");
  scanf("%d",&secondNo);
  if(firstNo > secondNo){
    printf("%d is greater than %d\n",firstNo,secondNo);
  }else{
    printf("%d is smaller than %d\n",firstNo,secondNo);
  }
  return 0;
}
