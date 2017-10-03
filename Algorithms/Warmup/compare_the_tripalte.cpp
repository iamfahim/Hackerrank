//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[110],b[110],sa=0,sb=0;
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<3;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            sa++;
        }
        else if(a[i]<b[i])
        {
            sb++;
        }
    }
    cout<<sa<<" "<<sb<<endl;
    return 0;
}
