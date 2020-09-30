#include<iostream>
using namespace std;
main()
{
    long a,b,c,d,count=0;
    while(1)
    {
        cin>>a;
        cin>>b;
        if((a==0)&&(b==0))
        {
            break;
        }
        else{
                while((a!=0)&&(b!=0))
                {
            c=a%10;
            d=b%10;
            if(c+d>=10)
            {
                count++;
            }
            a=a/10;
            b=b/10;
        }

        }
if(count==0)
{

        cout<<"No carry operation."<<endl;
}
else
{
    cout<<count<< " carry operations."<<endl;
}
        count=0;
    }
}
