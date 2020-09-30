#include<stdio.h>
main()
{
    double n,an=0;
    scanf("%lf",&n);
    while(n--)
    {
        an=an+6;
        an=1/an;
    }
    an=3+an;
    printf("%.10lf\n",an);
}
