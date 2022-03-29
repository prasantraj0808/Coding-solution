#include<bits/stdc++.h>

using namespace std;

int maxcommonspan(bool arr1[],bool arr2[],int n)
{
    int max_size=0,len;
    int prefixsum1[n],prefixsum2[n];
    prefixsum1[0]=arr1[0];
    prefixsum2[0]=arr2[0];
    for(int i=1;i<n;i++)
    {
        prefixsum1[i]=arr1[i]+prefixsum1[i-1];
        prefixsum2[i]=arr2[i]+prefixsum2[i-1];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(prefixsum1[i]-prefixsum1[j] == prefixsum2[i]-prefixsum2[j])
            {
                len=i-j;
                if(max_size<len)
                max_size=len;
            }
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
    cout<<"the maximum length of common span is"<<ans;

    return 0;
}