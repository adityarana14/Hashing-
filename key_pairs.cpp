class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	    
	    // LETS DO THIS WITH TWO POINTER 
	    sort(arr,arr+n);
	    
	    int i=0;
	    int j=n-1;
	    while(i<j)
	    {
	        if(arr[i]+arr[j]==x)
	        return true;
	        
	        if(arr[i]+arr[j]>x)
	        j--;
	        else i++;
	    
	    }
	    return false;
	}
};