//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
long long ar[10];
long long sum;
int main()
{
   int n;
   cin>>n;
   sum=0;
   for(int i=0;i<n;i++)
   {
    cin>>ar[i];
    sum+=ar[i];
   }
   cout<<sum<<endl;
   return 0;
}
