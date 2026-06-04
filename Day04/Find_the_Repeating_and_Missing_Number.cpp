class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
         unordered_map<int,int>mp;
         int a,b;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto num:mp){
            if(num.second>1){
                a=num.first;
                break;
            }
        }
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int n=nums.size();
        b=abs(sum-  (( n*(n+1))/2))+1;
        return {a,b};

    }
};
