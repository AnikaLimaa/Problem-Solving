#include<stdio.h>
#include<string.h>
main()
{
    char x[1111];
    int s=0,n,j,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",x);
        for(j=0;j<strlen(x);j++)
        {
            if(x[j]=='1')
            {
                s+=2;
            }

            if(x[j]=='2')
            {
                s+=5;
            }

            if(x[j]=='3')
            {
                s+=5;
            }

            if(x[j]=='4')
            {
                s+=4;
            }

            if(x[j]=='5')
            {
                s+=5;
            }

            if(x[j]=='6')
            {
                s+=6;
            }

            if(x[j]=='7')
            {
                s+=3;
            }

            if(x[j]=='8')
            {
                s+=7;
            }

            if(x[j]=='9')
            {
                s+=6;
            }

            if(x[j]=='0')
            {
                s+=6;
            }
        }

        printf("%d leds\n",s);
        s=0;

    }
}
