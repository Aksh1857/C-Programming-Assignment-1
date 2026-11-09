#include <stdio.h>
int main(void){int n; scanf("%d",&n); for(int i=0;i<n;i++){for(int j=0;j<n;j++)putchar((i==0||i==n-1||j==0||j==n-1)?'*':' '); putchar('\n');} return 0;}
