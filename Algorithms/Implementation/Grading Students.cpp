//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int>vec;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int vn;
        cin>>vn;
        vec.push_back(vn);
    }
    for(int i=0;i<n;i++)
    {
        if(vec[i]<38)
        {
            cout<<vec[i]<<endl;
        }
        else
        {
            int flag=0;
            for(int j=1;j<=2;j++)
            {
                if((vec[i]+j)%5==0)
                {
                    cout<<vec[i]+j<<endl;
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                cout<<vec[i]<<endl;
            }
        }
    }
    return 0;

}
