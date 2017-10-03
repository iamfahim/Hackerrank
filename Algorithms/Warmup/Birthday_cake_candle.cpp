//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
long long n;
long long h[1000012];
int main()
{
    long long Count=0,Max=0,Temp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>h[i];
    }
    for(int i=0;i<n;i++)
    {
        Temp=h[i];
        if(Temp>Max)
        {
            Max=Temp;
            Count=1;

        }
        else if(Temp==Max)
        {
            Count++;
        }

    }
    cout<<Count<<endl;
    return 0;
}
