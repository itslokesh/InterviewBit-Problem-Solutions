bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
        vector<pair<int,int>> out;
        for(int i=0;i<arrive.size();i++){
            out.push_back(make_pair(arrive[i],1));
            out.push_back(make_pair(depart[i],0));
        }
        sort(out.begin(),out.end());
        int max=0,count=0;
        for(int i=0;i<out.size();i++){
            if(out[i].second==1){
                count++;
                if(count>max)
                    max=count;
            }
            else
                count--;
        }
        if(max<=K)
            return true;
        return false;
}