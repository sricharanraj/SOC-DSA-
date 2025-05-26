class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
     //i used two poinetr approach selected 1 point and finding remaining two using two pointer i think it has better time complexity  O(n) and some stl funstions
       
       std::sort(nums.begin(), nums.end()); 
        std::vector<std::vector<int>> result;
        int n = nums.size();
        
        for (int i = 0; i < n - 2; i++) {  
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
       
            int left = i + 1;
            int right = n - 1
            while (left < right) {
                int current_sum = nums[i] + nums[left] + nums[right];
                
                if (current_sum == 0) {
                    result.push_back({nums[i], nums[left], nums[right]});
                    
                    while (left < right && nums[left] == nums[left + 1]) {
                        left++;
                    }
                    
                    while (left < right && nums[right] == nums[right - 1]) {
                        right--;
                    }
                
                    left++;
                    right--;
                    
                } else if (current_sum < 0) {
                    left++;
                } else {
                    right--;
                }
            }
        }
        
        return result;
    
    }
};