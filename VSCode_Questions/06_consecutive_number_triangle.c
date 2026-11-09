#include <stdio.h>
int main(void){int n,x=1; scanf("%d",&n); for(int i=1;i<=n;i++){for(int j=1;j<=i;j++){if(j>1)putchar(' '); printf("%d",x++);} putchar('\n');} return 0;}
