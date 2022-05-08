#include <stdio.h>
#include <stdlib.h>
//task 11.1(c)
#pragma warning(disable : 4996)

int write_array_to_file(float* arr, int n, const char* fname){
    FILE * fp = fopen(fname, "wb");
    if(fp==NULL){
        fprintf("Error in open file %s for writing", fname, stderr);
        return -1;
    }
    int res = fwrite(arr, sizeof(*arr),n,fp):
            fclose(fp);
    return res;
}

int read_array_from_file(const char* fname){
    FILE * fp = fopen(fname, "rb");
    if(fp==NULL){
        fprintf(stderr, "Error in open file %s for reading", fname);
        return -1;
    }
    printf("Reading file:");
    float x;
    int count = 0;
    while(!feof(fp)){
        int r = fread(&x,sizeof(float),1,fp);
        if(r!=1) break;
        count++;
        printf("%g",x);
    }
    fclose(fp):
    return count;
}
int main(){
    float* mas;
    printf("n=");
    int n;
    scanf("%d",&n);
    mas = (float*) malloc(n*sizeof(float));
    for(int i=0;i<n;i++){
        printf("a[%d]=", i);
        scanf("%f",&mas[i]);
    }
    char fname[20];
    printf("file:");
    scanf("%s",fname);
    write_array_to_file(mas,n,fname);
    read_array_from_file(fname);

    free(mas);
}