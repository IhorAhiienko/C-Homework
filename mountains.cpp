#include <stdio.h>
#include <stdlib.h>
//task 10.5(c)
#pragma warning(disable : 4996)

#define LEN_NAME 255

typedef struct{
    char name [LEN_NAME];
    int height;
}; Mount;


int inputMount (Mount* x){
    printf("Mount name:");
    scanf("%s",x->name);
    printf("Mount height:");
    scanf("%d", &x->height);
    return true;
}

void outputMount (const Mount* x){
    printf("Mount %s of height %d\n", x->name, x->height);
}

const char* maxHeightName(const Mount* arr, size_t n){

    if(n==0) return "No mountains";

    int maxh = arr[0].height;
    int indexMax = 0;

    for(int i=1;i<n;i++){
        if(arr[i].height>maxh){
            maxh = arr[i].height;
            indexMax = i;
        }
    }
    return arr[indexMax].name;
}

void heightByName(const Mount* arr, size_t n, const char* mount_name){
    for (int i=0,i<n;i++){

        if (scrcmp(arr[i].name, mount_name)==0){
            maxh = arr[i].height;
            indexMax = i;
        }
    }
}

int main(){
    /*Mount m;
     * inputMount(&m);
     * outputmount(&m);*/

    Mount test[MAX_MAS] = {{"K2", 8676},{Everest, 8878},{Hill, 1234}};
    printf("%s", maxHeightName(test, 3));
}