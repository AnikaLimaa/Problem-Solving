#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int max(long long  a,long long b)
{
    return ((a>b)? a: b);
}

int min(long long a,long long b)
{
    return ((a<b)? a: b);
}
main()
{
    long long a,b,c;
    cin>>a>>b>>c;
    long long x=max(a,max(b,c));
    long long y=min(a,min(b,c));
    long long  z=a+b+c-x-y;
    if(x>=(y+z))
    {
        cout<<"Invalido"<<endl;
    }
    else
    {
        if((x==z)&&(y==z))
        {
             cout<<"Valido-Equilatero"<<endl;
        }
        else if((x!=y)&&(y!=z)&&(x!=z))
            cout<<"Valido-Escaleno"<<endl;
        else
            cout<<"Valido-Isoceles" <<endl;
        if(x*x==(y*y+z*z))
        {
            cout<<"Retangulo: S"<<endl;
        }
        else
        {
            cout<<"Retangulo: N"<<endl;
        }
    }

}
