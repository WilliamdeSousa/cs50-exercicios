#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <cs50.h>

int main()
{
    int points[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    string player[2];
    player[0] = get_string("Player 1: ");
    player[1] = get_string("Player 2: ");

    int player_points[2] = {0, 0};
    
    for (int i = 0; i < 2; i++)
    {
        int j = 0;
        while (player[i][j] != 0)
        {
            if (player[i][j] >= 'a' && player[i][j]<= 'z')
            {
                player_points[i] += points[player[i][j] - 97];
            }
            else if (player[i][j] >= 'A' && player[i][j]<= 'Z')
            {
                player_points[i] += points[player[i][j] - 65];
            }
            j++;
        }
    }
    if (player_points[0] > player_points[1])
    {
        printf("Player 1 wins!\n");
    }
    else if (player_points[0] < player_points[1])
    {
        printf("Player 1 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}