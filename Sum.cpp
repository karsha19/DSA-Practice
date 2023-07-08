class Solution {
public:
	int sumOfElements(vector<vector<int>>& arr) {
		// Your code goes here
        int sum = 0;

        for (const auto& row : arr) {
            for (int num : row) {
                sum += num;
            }
        }

        return sum;
    }
};
