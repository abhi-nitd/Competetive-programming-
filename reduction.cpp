#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        int a[n];
        long long sum=0,count=0,sumb=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>k)
            {
                count++;
                sum=sum+a[i];
            }
            else
            {
                sumb=sumb+a[i];
            }
        }
        if(count==0)
        {
            printf("%lld\n",sumb);
        }
        else if(count==1)
        {
            printf("%lld\n",sumb+sum);
        }
        else if(count==2)
        {
            sort(a,a+n);
            int nik=a[n-2];
            int temp=a[n-1];
            printf("%lld\n",sumb+k+temp-(nik-k));
        }
        else if(count>2)
        {
            sort(a,a+n);
            int nik=a[n-2];
            int temp=a[n-1];
            long long num=sum-nik-temp;
            num=num-(count-2)*k;
            if(num>=nik-k)
            {
                if((sum-temp-(count-1)*k)%2)
                {
                    printf("%lld\n",(count-1)*k+a[n-1]-1+sumb);
                }
                else
                {
                    printf("%lld\n",(count-1)*k+a[n-1]+sumb);
                }
            }
            else
            {
                printf("%lld\n",sumb+(count-1)*k+a[n-1]-(nik-num-k));
            }
        }
    }
}
