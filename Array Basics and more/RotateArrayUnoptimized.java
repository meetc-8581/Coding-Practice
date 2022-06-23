class Solution {
    public void rotate(int[] nums, int k) {
        while (k > 0) {

            int i = 0;
            int temp;

            while (i < nums.length - 1) {
                temp = nums[i];
                nums[i] = nums[nums.length - 1];
                nums[nums.length - 1] = temp;
                i++;
                System.out.println(nums[nums.length - 1]);
            }

            k--;
        }
    }
}