class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int high=0;
        int alt=0;
        int len=gain.size();
        for(int i=0;i<len;i++){
            alt+=gain[i];
            if(alt>high){
                high=alt;
            }
        }
        return high;
    }
};