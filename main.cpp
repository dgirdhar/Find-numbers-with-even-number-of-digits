class Solution {
public:
    bool getCount(int &num) {
        bool isEven = true;
        
        while (num != 0) {
            num /= 10;
            isEven = isEven ? false : true;
        }
        
        return isEven;
    }
    
    int findNumbers(vector<int>& nums) {
        int count = 0;
        
        for (int i = 0; i < nums.size(); ++i) {
            if (getCount(nums[i])) {
                count++;
            }
        }
        
        return count;
    }
};
