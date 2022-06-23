class Solution {
    public void rotate(int[] nums, int k) {
        if (nums.length <= 1) {
            return;
        }
        if (nums.length <= k) {
            rotate(nums, k - nums.length);
            return;
        }
        int mid = nums.length / 2;
        // System.out.println(mid);
        int temp;
        for (int i = 0; i < mid; i++) {
            // swap code
            temp = nums[i];
            nums[i] = nums[(nums.length - 1 - i)];
            nums[(nums.length - 1 - i)] = temp;
        }
        // reverse the front again
        mid = k / 2;
        for (int i = 0; i < mid; i++) {
            // swap code
            temp = nums[i];
            nums[i] = nums[(k - 1 - i)];
            nums[(k - 1 - i)] = temp;
        }

        // reverse the back again
        mid = k + ((nums.length - 1 - k) / 2);
        for (int i = k; i <= mid; i++) {
            // swap code
            temp = nums[i];
            nums[i] = nums[(nums.length - 1 - i + k)];
            nums[(nums.length - 1 - i + k)] = temp;
        }
    }
}