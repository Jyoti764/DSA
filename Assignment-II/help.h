#include<stdio.h>
#include<string.h>


int binaryproduct(int bin1, int bin2)
{
    int i = 0, remainder = 0, sum[20];
    int binaryprod = 0;
 
    while (bin1 != 0 || bin2 != 0)
    {
        sum[i++] =(bin1 % 10 + bin2 % 10 + remainder) % 2;
        remainder =(bin1 % 10 + bin2 % 10 + remainder) / 2;
        bin1 = bin1 / 10;
        bin2 = bin2 / 10;
    }
    if (remainder != 0)
        sum[i++] = remainder;
    --i;
    while (i >= 0)
        binaryprod = binaryprod * 10 + sum[i--];
    return binaryprod;
}
