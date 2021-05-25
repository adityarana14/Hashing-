class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int a[], int n, int X)
    {
        //Your Code Here
        sort(a,a+n);
    for(int i=0;i<n-2;i++)
    {
        int j=i+1;
        int k=n-1;
        while(j<k)
        {
            if(a[i]+a[j]+a[k]==X)
            return true;
            else if(a[i]+a[j]+a[k]>X)
            k--;
            else
            j++;
        
        }
        
    }
    return false;
    }

};