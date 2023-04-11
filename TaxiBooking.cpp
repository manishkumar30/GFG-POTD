class Solution{
public:
    int minimumTime(int N,int cur,vector<int> &pos,vector<int> &time){
        int minimum_time=INT_MAX;
        for(int i=0;i<N;i++){
            int taxi_time=abs(pos[i]-cur)*time[i];
            if(minimum_time>taxi_time)
            minimum_time=taxi_time;
        }
        
        return minimum_time;
    }
};
