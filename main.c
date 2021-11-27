#include <stdio.h>
#include "my_mat.h"

int main()
{
   int mat[10][10];
   
    char user;
    scanf("%c", &user);
    while (user != 'D')
    {
        if (user == 'A')
        {
            func1(mat);
            
        }
        else if (user == 'B')
        {
            int ans=func2(mat);
            if (ans == 0)
        {
            printf("False");
            printf("\n");
        }
    else
        {
            printf("True");
            printf("\n");
        }
            
        }
        else if (user == 'C')
        {
           int ans= func3(mat);
           if (ans == 0)
    {
        printf("-1");
        printf("\n");
    }
    else
    {
        printf("%d", ans);
        printf("\n");
    }
         }
        if (user=='D'){
            return 0;
        }else{
            scanf("%c", &user); 
        }
 
        
    }
   return 0;
} // 