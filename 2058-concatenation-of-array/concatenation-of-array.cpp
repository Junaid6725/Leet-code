class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
   int len=nums.size();
   vector<int>ans(2*len);
   for(int i=0;i<len;i++){
    ans[i]=nums[i];
    ans[i+len]=nums[i];
   }
   return ans;
    }
};