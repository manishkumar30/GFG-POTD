class Solution {
public:
    vector<int> findMaxRow(vector<vector<int>> mat, int N) {
        //code here
        int i=0;
        int j=N-1;
        int row=0;
        int count=0;
        while(j>=0 and i<N)
        {
            if(mat[i][j]==1){
                count++;
                row=i;
                j--;
            }
            else{
                i++;
            }
        }
        vector<int> ans;
        ans.push_back(row);
        ans.push_back(count);
        
        return ans;
    }
};
