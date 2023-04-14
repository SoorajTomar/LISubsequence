#include <bits/stdc++.h>
using namespace std;
int LISubsequence(int *a,int n){
    int dp[n];
    for(int i=0;i<n;i++)
    dp[i]=1;
    for(int i=1;i<n;i++)
    for(int j=0;j<i;j++){
        if(a[i]>a[j] and dp[i]<dp[j]+1)
        dp[i]=1+dp[j];
    }
    return *max_element(dp,dp+n);
}
int main()
{
    int a[]={60,10,40,10,30,20,100};
    int n=7;
    cout<<"Longest Increasing Subsequence:"<<LISubsequence(a,n)<<endl;
    return 0;
}
