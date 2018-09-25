#include <iostream>

using namespace std;

int main()
{
    int n,i,j,c=1;
    cout << "Enter no. of terms:" << endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        cout<<" ";
        cout<<i;
        for(j=2;j<2*i-1;j++)
        cout<<" ";
        if(i!=1)
            cout<<i;
        cout<<endl;
}
n=n-1;
for(i=n;i>=1;i--)
{
    for(j=1;j<=n-i+1;j++)
        cout<<" ";
    cout<<i;
    for(j=1;j<2*(i-1);j++)
        cout<<" ";
    if(i!=1)
        cout<<i<<endl;
}
    return 0;
}
