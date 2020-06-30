class Solution {
public:
    int getCount(int &num) {
        int res = 0;
        
        while (num != 0) {
            num /= 10;
            res++;
        }
        
        return res;
    }
    
    int findNumbers(vector<int>& nums) {
        int count = 0;
        
        for (int i = 0; i < nums.size(); ++i) {
            if (getCount(nums[i]) % 2 == 0) {
                count++;
            }
        }
        
        return count;
    }
};
