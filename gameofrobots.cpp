#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[51];
        scanf("%s",a);
        int len=(int)strlen(a);
        int checker=0,flag=0;
        int nik=0,temp=0;
        for(int i=0;i<len;i++)
        {
           if(a[i]!='.')
           {
               if(checker==0)
               {
                   nik=i;
                   temp=a[i]-48;
                   checker=1;
               }
               else
               {
                   if(i-(a[i]-48)<=nik+temp)
                   {
                       printf("unsafe\n");
                       flag=1;
                       break;
                   }
                   else
                   {
                       nik=i;
                       temp=a[i]-48;
                   }
               }
           }
        }
        if(flag==0)
        {
            printf("safe\n");
        }
    }
}
