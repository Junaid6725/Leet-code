class Solution {
public:
    int largestAltitude(vector<int>& gain) {
       int netGain=0;
       int maxAlt=0;
       for(int i=0;i<gain.size();i++){
        netGain=gain[i]+netGain;
        if(maxAlt<netGain){
            maxAlt=netGain;
        }
       }
       return maxAlt;

    }
};