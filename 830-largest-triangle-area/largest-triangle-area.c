double area(int p[], int q[], int r[]){
    int x1 = p[0], y1 = p[1];
    int x2 = q[0], y2 = q[1];
    int x3 = r[0], y3 = r[1];
    return 0.5*abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
}

double largestTriangleArea(int** points, int pointsSize, int* pointsColSize) {
    int n = pointsSize;
    double area1;
    for(int i =0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                if(area1 < area(points[i], points[j], points[k])){
                    area1 = area(points[i], points[j], points[k]);
                }
            }
        }
    }return area1;
}