#include <stdio.h>
#include <stdlib.h>

int main()
{int n;
int *p= &n;
printf("enter the value of n");
scanf("%d",&n);
if(*p % 2==0)printf("%d= pair number",*p);
else printf("%d =impair number",*p);

    return 0;
}
