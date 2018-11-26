#include "text_to_bin_hex.c"

int main()
{
    char *text = "4chan";
    char *bin_text;
    char *octal_text;
    char *hex_text;

    convert_bin(text, &bin_text);
    convert_octal(text, &octal_text);
    convert_hex(text, &hex_text);

    printf("Original text: %s\n", text);
    printf("Binary text: %s\n", bin_text);
    printf("Octal text: %s\n", octal_text);
    printf("Hexadecimal text: %s\n", hex_text);
    return 0;
}
