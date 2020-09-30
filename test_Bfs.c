#include<stdio.h>
int main()
{
int i,j,cost[6][6];
for(i=1;i<=6;i++)
{
    for(j=1;j<=6;j++)
    {
cost[i][j]=0;
    }
}
int v[10],limit=0;
cost[1][2]=1;
cost[1][3]=1;
cost[2][4]=1;
cost[3][4]=1;
cost[2][5]=1;
cost[3][6]=1;
int l1=0,i1=1;
for(i=1;i<=6;i++)
{
    for(j=1;j<=6;j++)
    {
        if(i>2)
        {
            while(l1<limit)
            {
               if( v[l1]==cost[i][j])
               {
                   printf("\n matched");
               }

                l1++;
            }
        }

if(cost[i][j]==1)
{
    limit++;
    v[i1]=cost[i][j];
    i1++;

}
    }
}
}
