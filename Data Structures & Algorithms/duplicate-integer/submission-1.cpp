class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_set<int> bag ; 


        for ( int i = 0 ; i < nums.size() ; i++) { 
            int num = nums[i] ; 

            if (bag.count(num)) { 
                return true ; 

            }

            bag.insert(num) ; 


        }

        return false ; 

        
    }
};