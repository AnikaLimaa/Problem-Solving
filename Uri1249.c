#include<stdio.h>
main()
{
    int n;
    char s[100],c;
    scanf("%d",&n);
    int ans[5]={0};
    while(n--)
    {
        scanf("%s %c",s,&c);
        if(c=='X')
        {
            ans[0]++;
        }
        else if(c=='H')
        {
            ans[1]++;
        }
        else if(c=='E')
        {
            ans[2]++;
        }
        else if(c=='A')
        {
            ans[3]++;
        }
        else
        {
            ans[4]++;
        }

    }
    printf("%d Hobbit(s)\n",ans[0]);
    printf("%d Humano(s)\n",ans[1]);
    printf("%d Elfo(s)\n",ans[2]);
    printf("%d Anao(s)\n",ans[3]);
    printf("%d Mago(s)\n",ans[4]);


}
