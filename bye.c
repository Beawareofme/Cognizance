#include <stdio.h>
#include <math.h>
int main(void) {
  int n,i,p=0;
  printf("Enter a positive number \n");
  scanf("%d",&n);
  for (i=1;i<=n;i++){
    if(n%i==0){
      p++;
    }
  }
    if(p==2){
      printf("The number entered is a prime number");
    }
    else{
      printf("The number entered is not a prime number ");
    }       
}