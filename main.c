#include "text_to_bin_hex.c"

int main()
{
    char **text = "Hello";
    char **bin_text = convert_bin(&text);
    char **hex_text = convert_hex(&text);

    printf("%s\n, %s\n, %s\n", text, bin_text, hex_text);
    return 0;
}