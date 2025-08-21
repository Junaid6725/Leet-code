class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
   int sum=0;
   vector<int>ans;
   int len=nums.size();
   for(int i=0;i<len;i++){
    sum+=nums[i];
    ans.emplace_back(sum);
   }
   return ans;

};};