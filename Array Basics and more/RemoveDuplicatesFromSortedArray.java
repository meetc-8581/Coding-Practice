
// Just the code Driver code needed.

class Solution {
    public int removeDuplicates(int[] nums) {
        int index = 0;
        for (int i = 1; i < nums.length; i++) {
            if (nums[index] != nums[i]) {
                System.out.println(i);
                index++;
                nums[index] = nums[i];
            }
        }
        return index + 1;
    }

}
