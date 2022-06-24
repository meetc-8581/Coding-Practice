import java.util.HashSet;

class Solution {
    public boolean isValidSudoku(char[][] board) {
        for (int i = 0; i < board.length; i++) {
            HashSet<Character> check = new HashSet<Character>();
            for (int j = 0; j < board[0].length; j++) {

                if (board[i][j] == '.') {
                    continue;
                }
                if (check.contains(board[i][j]) == true) {

                    return false;
                } else {
                    check.add(board[i][j]);
                }
            }
        }

        for (int i = 0; i < board.length; i++) {
            HashSet<Character> check = new HashSet<Character>();
            for (int j = 0; j < board[0].length; j++) {

                if (board[j][i] == '.') {
                    continue;
                }
                if (check.contains(board[j][i])) {

                    return false;
                } else {
                    check.add(board[j][i]);
                }
            }
        }

        for (int k = 0; k < 9; k += 3) {
            for (int l = 0; l < 9; l += 3) {
                HashSet<Character> check = new HashSet<Character>();
                for (int i = k; i < k + 3; i++) {
                    for (int j = l; j < l + 3; j++) {
                        if (board[j][i] == '.') {
                            continue;
                        }

                        if (check.contains(board[j][i])) {
                            return false;
                        } else {
                            check.add(board[j][i]);
                        }
                    }
                }
            }
        }

        return true;
    }
}