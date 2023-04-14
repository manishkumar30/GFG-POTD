class Solution {
  public:
    int finLength(int N, vector<int> color, vector<int> radius) {
        
        /*
        We have two arrays one is color and other one is radius
        color[i] represnt the color of ith ball where as radius[i] reprent the radius of ith ball.
        if two consecutive balls have same color and radius then we have to remove those balls from the array
        and return the size of the final array.
        Ex
        color[]={1 2 2 5}
        radius[]={2 3 3 2}
        O/p 2
        
        We can use stack to store the index of the array and whenever we found two consecutive
        indexes whose color is same and radius is same then we will pop those indexes from the stack .
        else we keep pushing the indexes.
        
        */
        
        stack<int> st;
        for(int i=0;i<N;i++){
            if(st.size()){
                int index=st.top();
                if(color[index]==color[i]&&radius[index]==radius[i])
                st.pop();
                else
                st.push(i);
            }
            else{
                st.push(i);
            }
        }
        return st.size();
    }
};
