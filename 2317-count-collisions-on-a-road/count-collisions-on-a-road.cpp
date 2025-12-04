class Solution {
public:
    int countCollisions(string str) {
        int n = str.length(),count = 0;
        int i = 0,j = n-1;
        while(i<n && str[i] == 'L'){
            i++;
        }
        while(j >= 0 && str[j] == 'R'){
            j--;
        }
    printf("%d %d\n", i, j);
    while(i<=j){
        if(str[i] == 'R'||str[i] == 'L'){
            count++;
        }i++;
    }return count;
    }
};