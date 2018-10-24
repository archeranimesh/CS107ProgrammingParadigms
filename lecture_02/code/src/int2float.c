#include<stdio.h>
int main()
{
    int i = 37;
    float f = *(float *)&i;

    printf("i = %d, f = %f\n",i, f);
    return 0;
}
