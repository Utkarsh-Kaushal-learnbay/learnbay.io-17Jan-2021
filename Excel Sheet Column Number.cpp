class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans=0;
        for(char i:columnTitle){
            int num=i-'A'+1;
            ans=ans*26+num;
        }
        return ans;
    }
};
