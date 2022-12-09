//to search key element in array
#include <iostream>
using namespace std;
int main() {
int n,key;
cout<<"enter the size of array ";
cin>>n;
int A[n];
for(int i=0;i<n;i++)
{
    cin>>A[i];
    cout<<A[i]<<" ";
}
cout<<endl;
cout<<"enter the key element ";
cin>>key;
for(int i=0;i<n;i++)
{
    if(key==A[i])
    {
    cout<<"key found at "<<i;
    exit(0);
    }
}
cout<<"key not found";
    return 0;
}
