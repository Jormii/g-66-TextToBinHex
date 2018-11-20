#include "text_to_bin_hex.h"

char* convert(char **text, char mode)
{
    int multiplier;

    switch(mode)
    {
        case MODE_BINARY:
            multiplier = 8;
            break;
        case MODE_HEX:
            multiplier = 2;
            break;
        default:
            printf("ERROR\n");
            return "\0";
    }

    int text_length = strlen(*text);
    int output_text_length = multiplier * text_length + 1;
    char *output_text[output_text_length];
    
    for (int index = 0; index < text_length; index++)
    {
        char character = *text[index];
        itoa(character, output_text[multiplier * index], mode);
    }
    return output_text;
}

char* convert_bin(char **text)
{
    return convert(text, MODE_BINARY);
}

char* convert_hex(char **text)
{
    return convert(text, MODE_HEX);
}