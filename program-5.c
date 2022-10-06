#include <stdio.h>
int fibbonacci(int n) {
 if(n == 0){
 return 0;
 } else if(n == 1) {
 return 1;
 } else {
 return (fibbonacci(n-1) + fibbonacci(n-2));
 }
}
int main() {
 int n;
 int i;
 printf("Sk shanwaz\n191911494\n ");
 printf("enter the number:");
 scanf("%d",&n);
 printf("Fibbonacci of %d: " , n);

 for(i = 0;i<n;i++) {
 printf("%d ",fibbonacci(i));
 }
}
