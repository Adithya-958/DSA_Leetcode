class Solution {
public:

    int fib(int n) {
        if(n <= 1)  return n;
        int sum = 0;
        sum = fib(n-2)+fib(n-1);
        return sum;
    }
};