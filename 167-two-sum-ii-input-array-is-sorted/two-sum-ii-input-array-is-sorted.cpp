class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int st=0,ed=n-1;
        
        
        vector<int>ans;
        while(st<ed){
            int sum=numbers[st]+numbers[ed];
            if(sum>target){
                ed--;
            }
            else if(sum<target){
                st++;
            }
            else{
                ans.push_back(st+1);
                ans.push_back(ed+1);
                break;
            }
        }
        return ans;
    }
};