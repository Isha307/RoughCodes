class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        vector<int> dp(n+1,0);
        if(n==1) return arr[0];
        if(n==2) return max(arr[0],arr[1]);
        dp[0] = arr[0];
        dp[1] = max(arr[0],arr[1]);
        for(int i=2;i<n;i++)
         dp[i] = max(dp[i-1], dp[i-2]+arr[i]);
        return dp[n-1];
    }
