#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main()
{
    string text = get_string("Text: ");
    int i=0, words=1, phrases=0, letters;
    while (text[i] != 0)
    {
        if (text[i] == ' ')
        {
            words++;
        }

        if (text[i] == '.' || text [i] == '!' || text [i] == '?')
        {
            phrases++;
        }

        if ((text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z'))
        {
            letters++;
        }
        i++;
    }
    float L = ((float) letters / words) * 100;
    float S = ((float) phrases / words) * 100;
    float indice = 0.0588 * L - 0.296 * S - 15.8;
    if (indice < 1)
    {
        printf("Before Grade 1\n");
    } 
    else if (indice >= 16)
    {
        printf("Grade 16+\n3");
    }
    else 
    {
        printf("Grade %i\n", (int) round(indice));
    }
    // printf("%i %i %i (%f %f)", letters, words, phrases, L, S);
}
