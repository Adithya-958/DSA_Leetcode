#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))
int maxArea(int* height, int heightSize) {
        int maxArea = 0;
        int i = 0, j = heightSize - 1;

        while (i < j) {
            int currArea = min(height[i], height[j]) * (j - i);
            maxArea = max(maxArea, currArea);

            if (height[i] < height[j]) {
                i++;
            } else {
                j--;
            }
        }
        return maxArea;
}