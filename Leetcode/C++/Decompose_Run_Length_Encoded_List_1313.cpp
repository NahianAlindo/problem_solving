class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int i;
        vector<int> ans;

        for(i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                for(int j=0;j<nums[i];j++)
                {
                    ans.push_back(nums[i+1]);
                }
            }
        }

        return ans;
    }
};
