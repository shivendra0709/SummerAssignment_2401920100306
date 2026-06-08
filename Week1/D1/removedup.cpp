#include <iostream>
#include <vector>

using namespace std;
class Solution
{
public:
    int removeDuplicates(std::vector<int> &nums)
    {
        if (nums.empty())
        {
            return 0;
        }
        int write_index = 0;

        for (int read_index = 1; read_index < nums.size(); ++read_index){

            if (nums[read_index] != nums[write_index]){

                write_index++;
                nums[write_index] = nums[read_index];
            }
        }
        return write_index + 1; 
    }
};

int main() {
    Solution solution;

    std::vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    std::cout << "Original array: ";
    for (int num : nums) {
        std::cout << num << " ";
    }

    std::cout << "\n";

    int k = solution.removeDuplicates(nums);

    std::cout << "Number of unique elements (k): " << k << "\n";

    std::cout << "Array after removing duplicates (first " << k << " elements): ";
    for (int i = 0; i < k; ++i) {
        std::cout << nums[i] << " ";
    }
    std::cout << "\n";
    
    return 0;

}