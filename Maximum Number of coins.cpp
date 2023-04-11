class Solution{
    public:
    int help(int N, vector<int> &arr, vector<vector<int>> &dp, int start, int end){
        if(start>end)return 0;
        if(dp[start][end]!=-1)return dp[start][end];
        int temp=1;
        if(start!=0)temp*=arr[start-1];
        if(end!=N-1)temp*=arr[end+1];
        for(int i=start;i<=end;i++){
            int t=temp*arr[i];
            dp[start][end]=max(dp[start][end],t+help(N,arr,dp,start,i-1)+help(N,arr,dp,i+1,end));
        }
        return dp[start][end];
    }
    
        int maxCoins(int N, vector <int> &a)
        {
                // write your code here
                vector<vector<int>> dp(N, vector<int>(N,-1));
                return help(N,a,dp,0,N-1);
                
        }
};
