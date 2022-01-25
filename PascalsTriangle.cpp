class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        ans.push_back(vector<int>(1,1));
        for(int i=1;i<numRows;i++){
            ans.push_back(vector<int>(i+1));
            for(int j=0;j<=i;j++){
                int sum=0;
                if(j-1>=0) sum+=ans[i-1][j-1];
                if(j<=i-1) sum+=ans[i-1][j];
                ans[i][j]=sum;
            }
        }
        return ans;
    }
};
