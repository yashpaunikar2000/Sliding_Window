class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0,j=0;
        double sum=0;
        double maxi=INT_MIN;
        while(j<nums.size()){
            sum+=nums[j];
            if(j-i+1==k){
                double temp=sum/k;
                maxi=max(maxi,temp);
                sum-=nums[i];
                i++;
            }
            j++;
        }
        return maxi;
    }
};
