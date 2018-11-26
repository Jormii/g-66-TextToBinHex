#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Constants
 */
#define MODE_BINARY 2
#define MODE_OCTAL 8
#define MODE_HEX 16
const char CHARACTERS[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C',
                                'D', 'E', 'F' };

static void convert(const char *text, char **output_text, char mode);
void convert_bin(const char *text, char **output_text);
void convert_octal(const char *text, char **output_text);
void convert_hex(const char *text, char **output_text);