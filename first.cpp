//https://leetcode.com/problems/number-of-1-bits/
class Solution {
public:
    int hammingWeight(uint32_t n) 
    {
        unsigned int cnt=0;
        while(n>0)
        {
          
		     cnt++;  //another mthod is also there
		     n=n & (n-1);
        }
        return cnt;
    }
};