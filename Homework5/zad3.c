#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main(){
    unsigned n,m,p;
    srand(time(NULL)); 
    printf("Enter size of the first array:");
    scanf("%u",&n);
    double* array=malloc(n * sizeof(double));
    if(NULL==array){
        return EXIT_FAILURE;
    }
    for(int i=0;i<n;i++){
        array[i]=(double)rand()/RAND_MAX;
    }
    printf("Enter size of the second array:");
    scanf("%u",&m);
    array=realloc(array,(n+m) * sizeof(double));
    for(int i=n;i<n+m;i++){
        array[i]=(double)rand()/RAND_MAX+1;
    }
    printf("Enter size of the third array:");
    scanf("%u",&p);
    array=realloc(array,(n+m+p) * sizeof(double));
    for(int i=n+m;i<n+m+p;i++){
        array[i]=(double)rand()/RAND_MAX+2;
    }
    for(int i=0;i<n+m+p;i++){
        printf("%0.1lf\n",array[i]);
    }
    free(array);
    return EXIT_SUCCESS;
}

