class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        
        set<int> n;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2){
                n.insert(nums[i]*2);
            } else {
                n.insert(nums[i]);
            }
        }
        
        int diff=INT_MAX;
        while(true){
        int mini = *n.begin();
        int maxi = *n.rbegin();
        int curdiff= maxi - mini;
        diff = min(diff,curdiff);
        
            if(maxi%2==0) {
                n.erase(maxi);
                n.insert(maxi/2);
            } else{
                return diff;
            }
        }
    }
};

