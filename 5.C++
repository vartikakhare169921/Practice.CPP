//check whether prime or not
#include <iostream>
using namespace std;
int main() {
int n,c=0,r;
cout<<"enter a number:";
cin>>n;
for(int i=1;i<=n;i++)
{
    if(n%i==0)
    c++;
}
if(c==2)
{
    cout<<"prime";
}
else
cout<<"not prime";

    return 0;
}
