#include<stdio.h>

int main()
{ 
    int matrix1[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int matrix2[3][3] = {{1,2,3}, {4,5,6}, {7,9,5}};
    int add, ans = 0, col = 0, row = 0, count = 1, j, *p1, *p2, *pans, *padd;

    printf("Multiplied and Addition in matrix form:\n");

    for(int i = 0; i < 3; i++)
    {
        j = 0;
        printf("|");
        while(j < 3)
        {
            p1 = &matrix1[i][j];
            p2 = &matrix2[i][j];
            add = *p1 + *p2;
            padd = &add;
            while(count <= 3)
            {
                //count = 2
                p1 = &matrix1[i][col];
                p2 = &matrix2[row][j];
                ans = ans + (*p1 * *p2);
                pans = &ans;
                
                col++;
                row++;
                count++;
                //count = 4
            }

            printf("\t%d\t%d\t|",*pans, *padd);
            col = 0;
            row = 0;
            count = 1;
            ans = 0;
            j++;
        }
        printf("\n");
    }

    return 0;
}