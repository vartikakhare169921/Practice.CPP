//program to display elements of array
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    cout<<"enter the elements:";
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        cout<<A[i]<<" ";
    }
    return 0;
}
