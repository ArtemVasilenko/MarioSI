#include <stdio.h>


int main() {
    int arr[5][5] = {{0,0,0,0,0},
                    {0,0,0,0,0},
                    {0,0,0,0,0},
                    {0,0,0,0,0},
                    {0,0,0,0,0}};
    
    
    for (int i = 0; i <= 4; i++) {
        for (int j = 0; j <= i; j++) {
        printf("%i ", arr[i][j]);
        }
        printf("\n");
    }
}
