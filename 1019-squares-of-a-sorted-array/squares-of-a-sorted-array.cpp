class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int len=nums.size();
        vector<int>res(len);
        int right=len-1;
        int left=0;
        int pos=len-1;
        while(left<=right){
            int rightsqr=nums[right]*nums[right];
            int leftsqr=nums[left]*nums[left];
            if(leftsqr>rightsqr){
                res[pos]=leftsqr;
                left++;
            }
            else{
                res[pos]=rightsqr;
                right--; 
            }
        pos--;
        }
        return res;     
    }
};