#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0 ; i < nums.size(); i++) {
            for (int j = i + 1 ; j < nums.size(); j++) {
                if ((long long)nums[i] + nums[j] == target ) {
                    return {i, j};
            
                }
        
            }

        }
     return {} ;
        
    }
};

int main(){
    
    Solution solution;

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = solution.twoSum(nums, target);

    if(!result.empty()){
        cout <<"Indices are found : [" << result[0] << ", " << result [1] << "]" <<endl; 
    }
    else{
        cout<<"No Two Sum Solution found." << endl;
    }
    return 0 ;

}
