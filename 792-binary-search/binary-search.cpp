class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st=0,ed=nums.size()-1;
        
        while(st<=ed){
            int mid=st+(ed-st)/2;
            if(target>nums[mid]){
                st=mid+1;
            }
            else if(target<nums[mid]){
                ed=mid-1;
            }
            else{
                return mid;
            }
        }
        return -1;
    }
};