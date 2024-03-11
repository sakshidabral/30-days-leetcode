class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){// [2 2 1 3 4 3 4]
            ans=ans^nums[i]; // 2^2^1^3^4^3^4
        }
        return ans;
    }
};