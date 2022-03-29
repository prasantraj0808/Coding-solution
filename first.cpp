#include<bits/stdc++.h>

using namespace std;

int maxcommonspan(bool arr1[],bool arr2[],int n)
{
    int max_size=0,len;

    for(int i=0;i<n;i++)
    {
        int sum1=0,sum2=0;
        for(int j=i;j<n;j++)
        {
            sum1+=arr1[j];
            sum2+=arr2[j];
            if(sum1==sum2)
            {
                 len=j-i+1;
            }
            if(max_size<len)
            max_size=len;
        }
    }
    return max_size;
}
int main()
{
    cout<<"hello prasant";
    bool arr1[]={0, 1, 0, 1, 1, 1, 1};
    bool arr2[]={1, 1, 1, 1, 1, 0, 1}; 
    int n=sizeof(arr2)/sizeof(arr2[0]); 
    int ans=maxcommonspan(arr1,arr2,n);
    cout<<"the maximum length of common span is"ans;

    return 0;
}