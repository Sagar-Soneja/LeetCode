class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> mp;
        
        for(auto num:nums) {
            mp[num]++;
        }
        int maxi=0;
        for(auto m:mp) {
           
            auto it = mp.find(m.first+1);
            if(it!=mp.end()) {
                maxi = max(maxi,m.second+it->second);
            }
        }
        return maxi;
    }
};
