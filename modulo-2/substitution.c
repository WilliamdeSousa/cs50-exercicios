#include <stdlib.h>
#include <stdio.h>
#include <cs50.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    
    string key = argv[1];

    for (int i = 0; i < 26; i++)
    {   
        if (key[i] == 0)
        {
            printf("A chave deve conter 26 caracteres.\n");
            return 2;
        }
        if (key[i] >= 'a' && key[i] <= 'z')
        {
            key[i] = key[i] - 32;
        }
    }

    string plain = get_string("plaintext: ");
    string cipher = plain;

    int i = 0;
    while (plain[i] != 0)
    {
        if (plain[i] >= 'A' && plain[i] <= 'Z')
        {
            cipher[i] = key[plain[i] - 65];
        }
        else if (plain[i] >= 'a' && plain[i] <= 'z')
        {
            cipher[i] = key[plain[i] - 97] + 32;
        }
        i++;
    }
    printf("ciphertext: %s\n", cipher);
}