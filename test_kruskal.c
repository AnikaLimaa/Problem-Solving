#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int parent[9];

main()
{
    int u=1,v=8;
    while(u<8)
    {


int u1=find(u);
u++;
printf("\n\t U  %d\n",u1);
int v1=find(v);
printf("\n\t V  %d\n",v1);
}
}
int find(int i)
{ printf("\n\t parenT  %d\n",parent[i]);
	while(parent[i])
	i=parent[i];
	printf("\n\t I Value  %d\n",i);
	return i;
}
