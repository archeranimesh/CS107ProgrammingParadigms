#include<stdio.h>
int main()
{
    float f = 7.0f;
    short s = *(short *)&f;

    printf("f = %f s = %d\n", f, s);
    return 0;
}
