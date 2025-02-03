class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        int max_length=1;
        int inc=1;
        int dec=1;
        if(n==0){
            return 0;
        }
        for(int i=0;i<n-1;i++){
            if(nums[i]<nums[i+1]){
                inc++;
                dec=1;
            }
            else if(nums[i]>nums[i+1]){
                dec++;
                inc=1;
            }
            else{
                inc=1;
                dec=1;
            }
            max_length=max(max_length, max(inc,dec));    
        }
        return max_length;

        
    }
};