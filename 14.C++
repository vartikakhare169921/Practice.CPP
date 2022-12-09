//to display sum of nos in an array
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
    sum=sum+A[i];
}
cout<<"sum of nos is "<<sum;
    return 0;
}
