//program to find reverse of a no.
#include <iostream>
using namespace std;
int main() {
    int n,r;
    cout<<"enter a no.";
    cin>>n;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        cout<<r;
    }

    return 0;
}
