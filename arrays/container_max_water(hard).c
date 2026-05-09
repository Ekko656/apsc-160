#include <stdio.h>
#include <stdlib.h>

int maxWater(int height[], int size) {
    int lower = 0;
    int higher = size - 1;
    int area = 0;
    int max_area = 0;

    while(higher > 0){
        while(lower < size){
            int min = 0;
            if(height[lower] < height[higher]){
                min = height[lower];
            } else{
                min = height[higher];
            }
            area = abs(higher - lower) * min;
            if(area > max_area){
                max_area = area;
            }
            lower++;
        }
        higher--;
        lower = 0;
    }

    return max_area;
}

int main(void) {
    int height[] = { 1, 8, 6, 2, 5, 4, 8, 3, 7 };
    int size = 9;

    printf("%d\n", maxWater(height, size));  /* expected: 49 */

    return 0;
}