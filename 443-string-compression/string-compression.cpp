class Solution {
public:
    int compress(vector<char>& s) {
        int count = 1,j =0;
        string s1 = "";
        for(int i = 0; i < s.size(); i++){
            if(i+1 >= s.size() || s[i]!=s[i+1]){
                s[j++] = s[i]; 
                if(count>1){
                string countStr = to_string(count);
                    for(char digit : countStr){
                        s[j++] = digit;
                    }
                }count = 1;
            }
            
            else   { count++;}
        
        }
        return j;
    }
};