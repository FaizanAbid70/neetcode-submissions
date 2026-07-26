class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int i = 0;
        if(nums.size()==1){
            return false;
        }
        for(int j=nums.size()-1;j>=i;j--){



            if(j==i){
                j=nums.size()-1;
                i=i+1;
            }            
            
            if(i==nums.size()-1){
                break;
            }
            if(nums[i]==nums[j]){
                return true;
            }
        }
        return false;
    }
};