#include "draw.h"		/* for font */
#include "stdio.h"		/* for putchar */

void print_char_5x7(char c)
{
  c -= 0x20;
  for (char col = 0; col < 5; col++) {
    for (char row = 0; row < 7; row++) {
      unsigned short rowBits = font_5x7[c][col];
      unsigned short colMask = 1 << (6-row); /* mask to select bit associated with bit */
      putchar( (rowBits & colMask) ? '*' : ' ');
    }
    putchar('\n');
  }
  putchar('\n');
}


/* Ptints out font 11x16. */
void print_char_11x16(char c)
{
  c -= 0x20;
  for(char col = 0; col < 11; col++){
    for(char row = 0; row < 16; row++){
      unsigned short rowBits = font_11x16[c][col];
      unsigned short colMask = 1 << (15-row);
      putchar((rowBits & colMask) ? '*': ' ');
    }
    putchar('\n');
  }
  putchar('\n');
}
