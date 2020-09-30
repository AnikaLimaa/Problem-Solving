#include<stdio.h>
#include<string.h>
char ch[10];
char ch1[10];
int i=0,j,len,len1,c=0;

int str(char ch2[10])
{
    //printf(" Inside \n");
if(i<len )
{
    if(ch2[i]==ch2[j])
    {
        if(i<=len1 && j>=0)
        {i++;
        j--;
        c++;
        str(ch2);
        }
    }
    else
    {
        printf("not ");
    }
}

else
{

    printf(" Pallindrome\n");
    return 1;
}
}
int main()
{
    gets(ch);
    len=strlen(ch);
    //printf("%d",len);
    j=len-1;
    len1=j;
str(ch);
}
