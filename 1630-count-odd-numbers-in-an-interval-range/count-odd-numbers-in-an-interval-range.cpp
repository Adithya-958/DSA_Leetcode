class Solution {
public:
    int countOdds(int low, int high) {
     int i, j,c=0;
    // while(low <= high){
    //     if(low%2 == 1)  c++;
    //     low++;
    // }
    if(high%2 == 0) high -= 1;
    if(low%2 == 0) low += 1;
    c = ((high-low)/2) +1;
       return c;
    }
};