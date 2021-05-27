class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the 
	    
	    
	    int sum =0;
	    int maxLen=0;
	    
	    unordered_map<int,int> mp;
	    
	    for(int i=0;i<n;i++)
	    {
	        sum = sum+ arr[i];
	        
	        int rem= sum % k;
	        if(rem<0)
	        {
	            rem= rem+k;
	        }
	        if(rem==0)
	        maxLen=i+1;
	        
	        if(mp.find(rem)==mp.end())
	        mp[rem]=i;
	        
	        
	        if(mp.find(rem)!=mp.end())
	        {
	            maxLen= max(maxLen,i-mp[rem]);
	        }
	    }
	    return maxLen;
	}
};