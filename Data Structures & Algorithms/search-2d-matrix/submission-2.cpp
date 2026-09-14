class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        if (matrix.empty() || matrix[0].empty()) {
            return false;
        }

        int n = matrix.size();
        int m = matrix[0].size();

        int strt = 0;
        int end = n * m - 1;

        while (strt <= end) {

            int mid = strt + (end - strt) / 2;

            int value = matrix[mid / m][mid % m];

            if (value > target) {
                end = mid - 1;
            }
            else if (value < target) {
                strt = mid + 1;
            }
            else {
                return true;
            }
        }

        return false;
    }
};
