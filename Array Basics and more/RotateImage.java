class Solution {
    public void swap(int[][] nums, int i, int j, int k, int l) {
        int temp = nums[i][j];
        nums[i][j] = nums[k][l];
        nums[k][l] = temp;
    }

    public void rotate(int[][] matrix) {
        // Code for transpose
        for (int i = 0; i < matrix.length; i++) {

            for (int j = 0; j < i; j++) {
                swap(matrix, i, j, j, i);
            }

        }

        // for (int[] nums : matrix){
        // for (int num : nums){
        // System.out.print(" " + num);
        // }
        // System.out.println(" ");
        // }

        // code for rotate
        for (int i = 0; i < matrix.length / 2; i++) {
            for (int j = 0; j < matrix.length; j++) {
                swap(matrix, j, i, j, matrix.length - i - 1);
            }
        }

        // for (int[] nums : matrix){
        // for (int num : nums){
        // System.out.print(" " + num);
        // }
        // System.out.println(" ");
        // }
    }
}