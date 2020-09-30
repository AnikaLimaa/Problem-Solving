#include<stdio.h>
#include<string.h>

int i=0,len;
char ch[10]={"eyebRoW"};
len=sizeof(ch);
int capital_letter()
{
   if(ch[i]>='A' && ch[i]<='Z' && i<len)
   {
       return i;
   }
   else if(ch[i]>='a' && ch[i]<='z' && i<len)
   {
       i++;
       return capital_letter();
   }

   else
   {
       return -1;
   }
}
main()
{
int n=capital_letter();
printf("%d",n);
}
