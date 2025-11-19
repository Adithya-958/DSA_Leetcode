class Solution {
public:
    int findFinalValue(vector<int>& a, int x) {
        int n = a.size();
        set<int>st;
        for(auto& i: a) st.insert(i);
        while(!st.empty()){
            if(st.find(x) != st.end()){
                //cout<<"is"<<a[i]<<endl;
                x = (2*x);
            }
            else    break;
        }
        return x;
    }
};