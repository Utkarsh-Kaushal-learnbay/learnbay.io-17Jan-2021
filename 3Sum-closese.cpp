class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int maxx=nums[0]+nums[1]+nums[2];
        for(int i=0;i<nums.size()-2;i++){
            int left=i+1,right=nums.size()-1;
            while(left<right){
                int sum=nums[i]+nums[left]+nums[right];
                if(sum==target) return sum;
                if(abs(maxx-target)>abs(sum-target)) maxx=sum;
                if(sum<target) left++;
                else right--;
            }
        }
        return maxx;
    }
};
