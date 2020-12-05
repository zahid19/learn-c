#include <stdio.h>
int main()
{
    const int TOTAL_STUDENT = 2;
    const int TOTAL_COLUMN = 4;
    int mark[TOTAL_STUDENT][TOTAL_COLUMN];
    for (int i = 0; i < TOTAL_STUDENT; ++i)
    {  
        printf("ENTER STUDENT ID:\n");
        scanf("%d", &mark[i][0]);
        printf("ENTER Mark:\n");
        for (int j = 1; j < TOTAL_COLUMN; ++j)
        {           
            scanf("%d", &mark[i][j]);
        }
    }
    for (int i = 0; i < TOTAL_STUDENT; ++i)
    {  
        printf("STUDENT ID: %d\n", mark[i][0] );        
        printf("Mark:");
        for (int j = 1; j < TOTAL_COLUMN; ++j)
        {
            printf("%d ", mark[i][j] );            
        }
        printf("\n\n");
    }
     return 0;
}
