#include <stdio.h>
#include<math.h>
int main() {
  int b,c,e,f,k;
  k=1;
  c=1;
for (b=1 ; b<=4 ; b=b+1){
    for(e=4;e>b;e=e-1){
    printf(" ");
  }
  for (f=1;f<=b;f=f+1){
    printf("%d  ",k);
    k=k+1;
  }
  printf("\n");
}
}