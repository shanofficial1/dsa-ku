#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(){
    static int a[1000][1000];
    static int b[1000][1000];
    clock_t start, end;
    double cpu_time_used;
    srand(10); 

    
    for(int i=0;i<1000;i++){
        for(int  j=0;j<1000;j++){
            a[i][j]=rand()%100;
        }
    }
    for(int i=0;i<1000;i++){
        for(int  j=0;j<1000;j++){
            b[i][j]=rand()%100;
        }
    }
    start = clock();
    for(int i=0;i<1000;i++){
        for(int  j=0;j<1000;j++){
            a[i][j]=a[i][j]+b[i][j];
        }
    }
    
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken to add the matrices using index-based addition: %f seconds\n", cpu_time_used);
    printf("Time taken to initialize the matrices: %f seconds\n", cpu_time_used);
    printf("Matrix addition completed successfully.\n");
    printf("Matrix is: %d\n", a[0][0]);
    return 0;
}