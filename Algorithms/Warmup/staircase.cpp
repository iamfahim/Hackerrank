#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=n-i;j>=1;j--)
            {
                cout<<" ";
            }
            for(int k=1;k<=i;k++)
            {
                cout<<"#";
            }
            cout<<endl;
        }
    }
    return 0;
}
