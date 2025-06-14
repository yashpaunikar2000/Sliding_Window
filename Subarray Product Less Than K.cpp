class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1){
            return 0;
        }
     int cnt=0,n=nums.size();
     int right=0,left=0;
    int prod=1;
     while(right<n){
        prod=prod*nums[right];
        while(prod>=k){
            prod=prod/nums[left];
            left++;
        } 
        cnt+=(right-left)+1;
        right++;
     }
     return cnt;   
    }
};
