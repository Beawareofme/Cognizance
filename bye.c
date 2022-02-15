#include <stdio.h>
#include <math.h>
int main(void) {
  int n,previous,current,next;
  printf("abcd");
  scanf("%d",&n);
  previous=0;
  current=1;
  next=1;
  do{
    printf("\n%d",previous);
    previous=current;
    current=next;
    next=previous+current;
    n=n-1;
  }while(n!=0);
     
}