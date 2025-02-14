class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
       int n=nums.size();
       int max_len=1;
       int dec=1;
       int inc=1;
       if(n==0){
        return 0;
       }
       if(n==1){
        return 1;
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
        max_len=max(max_len,max(inc,dec));
       }
       return max_len;

        
    }
};