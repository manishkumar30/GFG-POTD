class Solution{   
public:
    long long solve(int X,int Y,string S){
      //code here
      
      string s1="pr";
      string s2="rp";
      
      if(X<Y){
          swap(X,Y);
          swap(s1,s2);
      }
      long long ans=0;
      
      stack<char> st;
      for(int i=S.size()-1;i>=0;i--){
          char curr=S[i], first=s1[0], second=s1[1];
          if(st.size()>0 && curr==first && st.top()==second)
          {
           st.pop();
           ans+=X;
          }
          else
          st.push(curr);
      }
      S="";
      while(st.size()>0)
      {
          S.push_back(st.top());
          st.pop();
      }
      
      for( int i=S.size()-1;i>=0;i--){
          char curr=S[i], first=s2[0], second=s2[1];
          if(st.size()>0 && curr==first && st.top()==second)
          {
           st.pop();
           ans+=Y;
          }
          else
          st.push(curr);
      }
      return ans;
    }
};
