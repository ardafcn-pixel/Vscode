#include<stdio.h>
int main()
{
    int arr[100],n=8,m=8,number=124532,i,remainder;
    while(n>0)
    {
        remainder=number%10;
        switch(remainder)
        {
            case 0:
                arr[n-1]=0; break;
            case 1:
                arr[n-1]=1;break;   
            case 2:
                arr[n-1]=2;break;
            case 3:
                arr[n-1]=3;break;
            case 4:
                arr[n-1]=4;break;
            case 5:
                arr[n-1]=5;break;
            case 6:
                arr[n-1]=5;break;
            case 7:
                arr[n-1]=7;break;
            case 8:
                arr[n-1]=8;break;
            case 9:
                arr[n-1]=9;break;
        }
        n--;
        number/=5;
    }
    for(i=0;i<m;i++) printf("%4d",arr[i]);
    return 0;
}