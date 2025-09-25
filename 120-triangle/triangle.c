int minimumTotal(int** tri, int triangleSize, int* triangleColSize) {
    int n = triangleSize;
for (int i = triangleSize - 2; i >= 0; i--) {
    for (int j = 0; j <= i; j++) {
        // When i = n-1 (last row), i+1 is out of bounds!
        tri[i][j] += (tri[i+1][j] < tri[i+1][j+1]) ? tri[i+1][j] : tri[i+1][j+1];
        // ↑ This would cause segmentation fault or undefined behavior
    }
}return tri[0][0];
}