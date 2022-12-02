#include <stdio.h>
        void printvet(float *i, float *f){
            for(;i<=f;i++){
            printf("%f\n", *i);
            }
        }
int main(int argc, char const *argv[])
{
    float num[5]={1.0, 2.0, 3.0, 4.0, 5.0};
    printvet(&num[0], &num[4]);

    return 0;
}
