class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index1,index2;
        for(int i=nums.size()-2;i>=0;i--) {
            if(nums[i]<nums[i+1]) {
                index1=i;
                break;
            }
        }
        
        if(index1<0) {
            reverse(nums.begin(),nums.end());
        } else {
       for(int i=nums.size()-1;i>=index1;i--) {
            if(nums[index1]<nums[i]) {
                index2=i;
                break;
            }
        }
        
        swap(nums[index1],nums[index2]);
        
        int last=nums.size()-1;
        
        while(index1+1 < last){
            swap(nums[index1+1],nums[last]);
            last--;
            index1++;
        }
    }
    }
};
