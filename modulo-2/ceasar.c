#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        int key = atoi(argv[1]);
        
        string plain = get_string("plaintext: ");
        string cipher = plain;

        int i = 0;
        while (plain[i] != '\0')
        {
            int base = 0;
            if (plain[i] >= 'A' && plain[i] <= 'Z')
            {
                base = 65;
            }
            else if (plain[i] >= 'a' && plain[i] <= 'z')
            {
                base = 97; 
            }
            if (base != 0)
            {
                cipher[i] = ((plain[i] - base) + key) % 26 + base;
            }
            else
            {
                cipher[i] = plain[i];
            }
            i++;
        }
        printf("ciphertext: %s\n", cipher);
    }
    else
    {
        printf("Usage: ./ceasar key\n");
    }
}