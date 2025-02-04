class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
    int max_sum=nums[0];
    int sum=nums[0];
    int n=nums.size();
    if(n==0){
        return 0;
    }
    for(int i=1;i<n;i++){
        if(nums[i]>nums[i-1]){
            sum+=nums[i];
        }
        else{
            max_sum=max(max_sum,sum);
            sum=nums[i];
        }
    }
    return max(max_sum,sum);    
    }
};