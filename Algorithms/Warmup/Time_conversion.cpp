//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[15];
    scanf(" %[^\n]",s);
       if(s[0]=='1' && s[1]=='2' && s[8]=='A' && s[9]=='M')
       {
          s[0]='0';
          s[1]='0';
           for(int i=0;i<8;i++)
           {
               cout<<s[i];
           }
           cout<<endl;
       }
            else if(s[0]=='1' && s[1]=='2' && s[8]=='P' && s[9]=='M')
       {
           for(int i=0;i<8;i++)
           {
               cout<<s[i];
           }
           cout<<endl;
       }
       else if(s[8]=='P' && s[9]=='M')
       {
           s[0]=s[0]+1;
           s[1]=s[1]+2;
            for(int i=0;i<8;i++)
           {
               cout<<s[i];
           }
           cout<<endl;

       }
       else
       {
            for(int i=0;i<8;i++)
           {
               cout<<s[i];
           }
           cout<<endl;
       }
    return 0;
}
