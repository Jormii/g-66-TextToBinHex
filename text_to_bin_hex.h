#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Constants
 */
#define MODE_BINARY 2
#define MODE_HEX 16

char* convert(char **text, char mode);
char* convert_bin(char **text);
char* convert_hex(char **text);