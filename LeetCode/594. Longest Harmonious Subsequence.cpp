public class Solution {
    public int FindLHS(int[] nums) {
        Array.Sort(nums);
        int j = 0, re = 0;

        for (int i = 0; i < nums.Length; ++i) {
            while (nums[i] - nums[j] > 1) {
                ++j;
            }
            if (nums[i] - nums[j] == 1) {
                re = Math.Max(re, i - j + 1);
            }
        }
        return re;
    }
}