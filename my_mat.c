#include <stdio.h>
#include "my_mat.h"

void func1(int mat[10][10])
{
    int user;

  //  for (int i = 0; i < 10; i++)
   // {
      //  for (int b = 0; b < 10; b++)
     //  {
        //    mat[i][b] = 0;
       // }
   // }

    for (int i = 0; i < 10; i++)
    {
        for (int b = 0; b < 10; b++)
        {
            scanf("%d", &user);
            mat[i][b] = user;
        }

        /* code */
    }
}

int func2(int mat[10][10])
{
    int len;
    int row;
    scanf("%d", &len);
    scanf("%d", &row);

    int dist[10][10], i, j, k;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            dist[i][j] = mat[i][j];
        }
    }

    for (k = 0; k < 10; k++)
    {
        // Pick all vertices as source one by one
        for (i = 0; i < 10; i++)
        {
            // Pick all vertices as destination for the
            // above picked source
            for (j = 0; j < 10; j++)
            {
                if (dist[i][k] == 0 || dist[k][j] == 0)
                {
                    continue;
                }
                if (dist[i][j] == 0 && i != j)
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
                // If vertex k is on the shortest path from
                // i to j, then update the value of dist[i][j]
                else if (dist[i][k] + dist[k][j] < dist[i][j])
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
    return dist[len][row];
}

int func3(int mat[10][10])
{
    int len;
    int row;
    scanf("%d", &len);
    scanf("%d", &row);

    int dist[10][10], i, j, k;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            dist[i][j] = mat[i][j];
        }
    }

    for (k = 0; k < 10; k++)
    {
        // Pick all vertices as source one by one
        for (i = 0; i < 10; i++)
        {
            // Pick all vertices as destination for the
            // above picked source
            for (j = 0; j < 10; j++)
            {
                if (dist[i][k] == 0 || dist[k][j] == 0)
                {
                    continue;
                }
                if (dist[i][j] == 0 && i != j)
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
                // If vertex k is on the shortest path from
                // i to j, then update the value of dist[i][j]
                else if (dist[i][k] + dist[k][j] < dist[i][j])
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
    return dist[len][row];
}