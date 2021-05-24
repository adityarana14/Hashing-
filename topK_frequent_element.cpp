class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        map<int,int> m;
        vector<int> answer;
        priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>> pq;
        
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        
        for(auto itr=m.begin();itr!=m.end();itr++)
        {
            //cout<<(*itr).first<<" "<<(*itr).second<<endl;
           
                pair<int, int> p;
                p=make_pair((*itr).second,(*itr).first);
                pq.push(p);
   
        }

        while(pq.size()!=k)
        {
            
            pq.pop();
        }
        
        while(pq.size()!=0)
        {
            answer.push_back(pq.top().second);
            pq.pop();
        }
        reverse(answer.begin(),answer.end());
        
        return answer;
    }
    
};