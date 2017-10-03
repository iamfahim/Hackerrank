//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int mat[105][105];
    int n,sum1=0,sum2=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
          cin>>mat[i][j];
      }
    }
        for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
          if(i==j)
          {
              sum1+=mat[i][j];
          }
          if((i+j)==n-1)
          {
              sum2+=mat[i][j];
          }
      }
    }
   // cout<<sum1<<" "<<sum2<<endl;
    cout<<abs(sum1-sum2)<<endl;
    return 0;

}
