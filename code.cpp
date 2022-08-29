class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0;
        for (int i=0;i<nums.size();i++)
        {    
            if(nums[i]==nums[i+1]==1)
                c++;
            
        }
   return c;
        
        }
};
