class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        int n=nums.size();
        int longestlength=0;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                if(sum==k){
                int len=j-i+1;
                longestlength=max(longestlength,len);
                }
            }
        }
        return longestlength;
    }
};
