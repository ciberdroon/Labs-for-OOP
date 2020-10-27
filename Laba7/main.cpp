#include "stdio.h"
#include "iostream"

int main()
{
    int i,j,n=3;

    int **a=new int*[n];
    for (i=0; i<n; i++)
    {
        a[i]=new int[n];
    }

    int **b=new int*[n];
    for (i=0; i<n; i++)
    {
        b[i]=new int[n];
    }


    printf("Enter elements matrix\n");
    for (i=0;i<3;i++)
    for (j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);

    }

    printf("Matrix\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        printf("%d ",a[i][j]);
        printf("\n");
    }

    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        b[i][j]=a[j][i];
    }

    printf("Transpore massiv\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        printf("%d ",b[i][j]);
        printf("\n");
    }

    printf("\n");
    printf("\n");


    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        printf("%d ",a[i][j]);
        printf("\n");
    }

    int flag=0;
    for (i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if (i!=n  && a[i][j]!=b[i][j])
                flag=1;
        }
    }

    if (flag==1)
        printf ("Matrix is not symmetrical");
    else
        printf ("Matrix is symmetrical");

}
