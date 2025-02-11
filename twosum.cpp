class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> solution;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = 0; j < nums.size(); ++j) {
                if (i != j) {
                    if (nums.at(i) + nums.at(j) == target) {
                        solution.push_back(i);
                        solution.push_back(j);
                        return solution;
                    }
                }
            }
        }
        return solution;
    }
};
