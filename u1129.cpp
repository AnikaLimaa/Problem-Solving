#include<iostream>
using namespace std;
main()
{
int b,c,a[10],t,g,f;
for(b=0;b<4;b++)
{
    cin>>a[b];
}
for(b=0;b<4;b++)
{
    for(c=b+1;c<4;c++)

    {
    if(a[b]>a[c])
    {
        t=a[b];
        a[b]=a[c];
        a[c]=t;
    }
    }
}
g=a[1]+a[0];
f=a[1]+a[2];
if((g>a[2])||(f>a[3]))
{
    cout<<"S"<<endl;
}
else
{
    cout<<"N"<<endl;
}
}
