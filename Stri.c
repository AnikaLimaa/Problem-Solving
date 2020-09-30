#include <stdio.h>
#include <string.h>
main()
{
    char str[10103];
    int i,len,n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",str);
        len=strlen(str);
        printf("%.2lf\n",len*.01);
    }
    return 0;
}
