
#include <stdio.h>
int main()
{
    int a11,a12,a21,a22,b11,b12,b21,b22,m1,m2,m3,m4;

    printf("first row of first matrix:");
    scanf("%d %d",&a11,&a12);

    printf("second row of first matrix:");
    scanf("%d %d",&a21,&a22);

    printf("first row of second matrix:");
    scanf("%d %d",&b11,&b12);


    printf("second row of second matrix:");
    scanf("%d %d",&b21,&b22);

    {
     m1=a11*b11;m2=a12*b12;
     m3=a21*b21;m4=a22*b22;
     printf("the Multiplication of matrix:");
     printf("\n \n");
     printf("%d %d \n%d %d",m1,m2,m3,m4);
    }

    return 0;

}
