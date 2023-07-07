class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //logic: place _ when repeated and save address for first _ in a variable
        // replace it when a diff number arrives else continue
        vector<int>::iterator address = nums.begin();
        int val = nums[0];
        int k = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (val != nums[i] ) {
                    address = nums.begin() + k;
                    *address = nums[i];
                    val = nums[i];
                    k++;
                }
            
        }
        return(k);
        
    }
};
