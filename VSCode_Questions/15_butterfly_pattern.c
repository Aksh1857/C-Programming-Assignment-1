#include <stdio.h>
int main(void){int n; scanf("%d",&n); int half=(n+1)/2; for(int row=1;row<=n;row++){int wing=row<=half?row:n-row+1; for(int i=0;i<wing;i++)putchar('*'); for(int s=0;s<2*(half-wing)+1;s++)putchar(' '); for(int i=0;i<wing;i++)putchar('*'); putchar('\n');} return 0;}
