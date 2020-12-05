#include <stdio.h>
const int CITY = 2;
const int WEEK = 7;
int mark[2][3];
int main()
{
    for (int i = 0; i < CITY; ++i)
    {  
        printf("ENTER STUDENT ID:\n");
        scanf("%d", &mark[i][0]);
        printf("ENTER Mark:\n");
        for (int j = 1; j < 4; ++j)
        {           
            scanf("%d", &mark[i][j]);
        }
    }
    for (int i = 0; i < CITY; ++i)
    {  
        printf("STUDENT ID: %d\n", mark[i][0] );        
        printf("Mark:");
        for (int j = 1; j < 4; ++j)
        {
            printf("%d ", mark[i][j] );            
        }
        printf("\n\n");
    }
     return 0;
}