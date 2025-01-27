class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>vec;
        int len =nums.size();
        for(int i=0; i<len-1; i++){
        for(int j=i+1;j<len;j++){
            if(nums[i]+nums[j]==target){
                vec.emplace_back(i);
                vec.emplace_back(j);
            }
        }    
        }
        return vec;
        
    }
};