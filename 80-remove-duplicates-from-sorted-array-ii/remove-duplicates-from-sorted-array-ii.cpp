class Solution {
    public:
     int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        // At most two elements can always be kept
        if (n <= 2) {
            return n;
        }

        int k = 2;

        for (int i = 2; i < n; i++) {
            // Keep nums[i] only if it won't create a third duplicate
            if (nums[i] != nums[k - 2]) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};