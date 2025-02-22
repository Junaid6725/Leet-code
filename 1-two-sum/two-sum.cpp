class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>sum;
        int len=nums.size();
        for(int i=0;i<len-1;i++){
            for(int j=i+1;j<len;j++){
                if(nums[i]+nums[j]==target){
                    sum.emplace_back(i);
                    sum.emplace_back(j);
                }
            }
        }
        return sum;
        
    }
};