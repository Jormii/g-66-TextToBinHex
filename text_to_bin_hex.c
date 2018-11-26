#include "text_to_bin_hex.h"

static void convert(const char *text, char **output_text, char mode) {
    int multiplier;
    int shift;

    switch(mode)
    {
        case MODE_BINARY:
            multiplier = 8;
            shift = 1;
            break;
        case MODE_OCTAL:
            multiplier = 3;
            shift = 3;
            break;
        case MODE_HEX:
            multiplier = 2;
            shift = 4;
            break;
        default:
            printf("ERROR: Mode value is %hhd. It should be either %d, %d or %d\n",
                mode, MODE_BINARY, MODE_OCTAL, MODE_HEX);
            return;
    }

    int og_text_length = strlen(text);
    int output_text_length = multiplier * og_text_length + 1;
    char *out_aux = (char*)malloc(output_text_length);

    for (int og_idx = 0; og_idx != og_text_length; ++og_idx) {
        char character = text[og_idx];

        for (int m = multiplier - 1; m >= 0; m--) {
            int output_idx = multiplier * og_idx + m;

            out_aux[output_idx] = CHARACTERS[character % mode];
            character = character >> shift;
        }
    }

    *output_text = (char*)malloc(output_text_length);
    strcpy(*output_text, out_aux);
    free(out_aux);
}

void convert_bin(const char *text, char **output_text) {
    return convert(text, output_text, MODE_BINARY);
}

void convert_octal(const char *text, char **output_text) {
    return convert(text, output_text, MODE_OCTAL);
}

void convert_hex(const char *text, char **output_text) {
    return convert(text, output_text, MODE_HEX);
}