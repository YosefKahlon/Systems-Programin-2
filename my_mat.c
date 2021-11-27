#include <stdio.h>

//set  (i,j)
void fucn1(int mat[10][10])
{
    int user;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            scanf("%d", &user);
            mat[i][j] = user;
        }
    }
}

//_______q2_____________________________

int func2(int mat[3][3])
{
    int row, col;
    int ten = 10 ;

    scanf("d", &row);
    scanf("d", &col);

    int dist[ten][ten], i, j, k;

    for (i = 0; i < ten; i++)
    {
        for (j = 0; j < ten; j++)
        {

            dist[i][j] = mat[i][j];
        }
    }

    for (k = 0; k < ten; k++)
    {
        // Pick all vertices as source one by one
        for (i = 0; i < ten; i++)
        {
            // Pick all vertices as destination for the
            // above picked source
            for (j = 0; j < ten; j++)
            {

                if (dist[i][k] == 0 || dist[k][j] == 0)
                {
                    continue;
                }
                if (dist[i][j] == 0 && i != j)
                {
                    dist[i][j] == dist[i][k] + dist[k][j];
                }
                else if (dist[i][k] + dist[k][j] < dist[i][j])
                {
                    dist[i][j] =dist[i][k] + dist[k][j];
                }
            }
        }
    }
    return dist[row][col];
}



  
