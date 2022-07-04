class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int x=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=x)
            {
                return x;
                break;
            }
            x--;
        }
        return 0;
    }
};