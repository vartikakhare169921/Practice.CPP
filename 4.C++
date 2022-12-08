//to print sum of even and odd numbers from 1 to N
#include <iostream>
using namespace std;
int main() {
int n,sum1=0,sum2=0;
cout<<"enter a no.:";
cin>>n;
for(int i=1;i<=n;i++)
{
    if(i%2==0)
    {
        sum1=sum1+i;
    }
    else
    {
    sum2=sum2+i;
    }
}
cout<<sum1<<endl;
cout<<sum2<<endl;
    return 0;
}
