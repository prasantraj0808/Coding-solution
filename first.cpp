//https://leetcode.com/problems/next-permutation/submissions/
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int size=nums.size();
        bool possible=next_permutation(nums.begin(),nums.end());
       for(auto x:nums)
       {
            cout<<x;
       }
        
    }
};