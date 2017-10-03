#include<bits/stdc++.h>
using namespace std;
long long a[5];
long long sum[5];
long long Max=0;
long long Min=0;
int main()
{
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i!=j)
            {
                sum[i]+=a[j];
            }
        }
    }
    Max=sum[0];
    Min=sum[0];
    for(int i=1;i<5;i++)
    {
        if(sum[i]>Max)
        {
            Max=sum[i];
        }
        if(sum[i]<Min)
        {
            Min=sum[i];
        }
    }
    cout<<Min<<" "<<Max<<endl;
    return 0;
}
