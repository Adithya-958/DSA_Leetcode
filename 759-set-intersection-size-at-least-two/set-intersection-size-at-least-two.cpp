class Solution {
public:
    static bool comp(vector<int> &a, vector<int> &b)
    {
        if (a[1] != b[1]) return a[1] < b[1];
        return a[0] > b[0];
    }
    int intersectionSizeTwo(vector<vector<int>>& in) {
        sort(in.begin(), in.end(), comp);
        int x = 0;
        int p1 = -1, p2 = -1;
        int n = in.size();
        for(int i = 0; i < n; i++){
            int l = in[i][0];
            int r = in[i][1];
            if(p2 < l){
                x += 2;
                p1 = r-1;
                p2 = r;
            }
            else if(p1<l){
                x += 1;
                if(p2 ==  r){    p1 = r-1;}
                else {
                    p1 = p2;
                    p2 = r;
                }
            }
        }
        return x;
    }
};