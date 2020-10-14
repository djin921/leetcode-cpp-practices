//O(N) naive
//Runtime: 8 ms, faster than 76.83% of C++ online submissions for Find Peak Element.
//Memory Usage: 9.1 MB, less than 100.00% of C++ online submissions for Find Peak Element.
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        // n >= 1
        // if(n == 1) return 0;
        // if(n == 2) return (nums[0] > nums[1]) ? 0 : 1;
        
        for(int i = 0; i < n; ++i){
            //to handle the boundary
            if(nums[i] > max(i == 0 ? LLONG_MIN : nums[i-1], 
                             i == n-1 ? LLONG_MIN : nums[i+1])) return i;
        }
        
        return -1;
    }
};