//to display sum of diagonal elemets of a matrix
#include <iostream>
using namespace std;
int main() {
int m,n,sum=0;
cout<<"enter the no. of rows ";
cin>>m;
cout<<"enter the no. of columns ";
cin>>n;
int A[m][n];
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        cin>>A[i][j];
        cout<<A[i][j]<<" ";
        if(i==j)
        sum=sum+A[i][j];
    }
    cout<<endl;
    
}
cout<<sum;
    return 0;
}
