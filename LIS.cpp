//Longest Increasing Subsequence

 //this is n^2 solution using Dynamic Programming.
 //there is also nlogn solution for this question using Dynamic Programming.
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size(),ans=1;
        if(n==0){
        return 0;
        }
        vector<int> v(n,1);
        for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(nums[i]>nums[j]){
                v[i]=max(v[i],v[j]+1);
            }
        }
           ans=max(ans,v[i]);
    }
        return ans;
    }

