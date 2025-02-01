class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int len=nums.size();
        int i=0;
        while(i<len-1){
            if((nums[i]%2==0 && nums[i+1]%2==0) 
                        || 
            (nums[i]%2!=0 && nums[i+1]%2!=0)){
                return false;
            }
            i++;
        }
        return true;
        
    }
};