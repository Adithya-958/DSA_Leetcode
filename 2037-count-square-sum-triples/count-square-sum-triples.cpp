class Solution {
public:
    int countTriples(int n) {
        // while(i < n){
        //     int j = i+1;
        //     while(j < n){
        //         int k = j+1;
        //         while(k <= n){
        //             cout<<"k in every cycle "<<k<<endl;
        //             if(((i*i)+(j*j)) == (k*k)){    res++;}
        //             k++;
        //         }
        //         j++;
        //     }
        //     i++;
        // }
        int res = 0;
        for(int i = 1; i < n; i++){
            for(int j = i+1; j < n; j++){
                //cout<<"res"<<res<<endl;
                //cout<<"j"<<j<<endl;
                int x = sqrt((i*i)+(j*j));
                if(x <= n && x*x == i*i + j*j){  
                    cout<<"check"<<i<<"is"<<j<<"sqrt is"<<x<<endl;
                    res++;
                    }
            }
        }
        return res*2;
    }
};