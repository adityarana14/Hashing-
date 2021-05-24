class Solution{
    public:
    //Function to return the count of the number of elements in
    //the intersection of two arrays.
    int NumberofElementsInIntersection (int a[], int b[], int n, int m )
    {
        // Your code goes here
        map<int,int> mp;
        set<int> first;
        set<int> second;
        
        for(int i=0;i<n;i++)
        {
            first.insert(a[i]);
        }
        
         for(int i=0;i<m;i++)
        {
            second.insert(b[i]);
        }
        
        for(auto itr= first.begin();itr!=first.end();itr++)
        {
             mp[(*itr)]++;
          
        }
         for(auto itr= second.begin();itr!=second.end();itr++)
        {
            mp[(*itr)]--;
        }
        
        
        
        int count =0;
        for(auto itr=mp.begin();itr!=mp.end();itr++)
        {
            if((*itr).second==0)
            count++;
        }
        
        return count;
        
    }
};