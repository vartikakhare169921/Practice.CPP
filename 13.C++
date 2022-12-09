//to display sum of even nos in an array
#include <iostream>
using namespace std;
int main() {
int n,sum=0;
cout<<"enter the size of array ";
cin>>n;
cout<<"enter the elements of array ";
int A[n];
for(int i=0;i<n;i++)
{
    cin>>A[i];
}
for(int i=0;i<n;i++)
{
    if(A[i]%2==0)
    {
    sum=sum+A[i];
    }
}
cout<<"sum of even nos is "<<sum;
    return 0;
}
