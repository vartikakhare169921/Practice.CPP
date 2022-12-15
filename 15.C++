
//to find sum of even elements of an array
#include <iostream>
using namespace std;
int main() {
    int sum=0;
int A[5]={1,2,3,4,5};
for(int i=0;i<5;i++)
{
    if(A[i]%2==0)
    {
        sum=sum+A[i];
    }
}
    cout<<sum;

    return 0;
}
