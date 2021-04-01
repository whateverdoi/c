#include <stdio.h>
int main(void)
{
    int a[3] = {2, 2, 1};
    /*
    A^A==0;
    A^0==A;
    A^B==B^A;
    (其中A和B只能为0，1)；
    {4,5,3,5,3,4,2,4}
    4^5^3^5^3^4^2^4
    */
    int n = a[0];
    int i;
    for (i = 1; i < 3; i++)
    {
        n ^= a[i];
    }
    printf("%d\n", n);
}
