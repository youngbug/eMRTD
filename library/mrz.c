#include <stdlib.h>
#include <emrtd/mrz.h>

int emrtd_mrz_decodedigit(char digit )
{
  int result = 0;
  if (digit >= '0' && digit <= '9')
  {
    result = atoi(digit);
  }
  else 
  {
    switch (digit)
    {
      case 'a': case 'A': result = 10; break;
      case 'b': case 'B': result = 11; break;
      case 'c': case 'C': result = 12; break;
      case 'd': case 'D': result = 13; break;
      case 'e': case 'E': result = 14; break;
      case 'f': case 'F': result = 15; break;
      case 'g': case 'G': result = 16; break;
      case 'h': case 'H': result = 17; break;
      case 'i': case 'I': result = 18; break;
      case 'j': case 'J': result = 19; break;
      case 'k': case 'K': result = 20; break;
      case 'l': case 'L': result = 21; break;
      case 'm': case 'M': result = 22; break;
      case 'n': case 'N': result = 23; break;
      case 'o': case 'O': result = 24; break;
      case 'p': case 'P': result = 25; break;
      case 'q': case 'Q': result = 26; break;
      case 'r': case 'R': result = 27; break;
      case 's': case 'S': result = 28; break;
      case 't': case 'T': result = 29; break;
      case 'u': case 'U': result = 30; break;
      case 'v': case 'V': result = 31; break;
      case 'w': case 'W': result = 32; break;
      case 'x': case 'X': result = 33; break;
      case 'y': case 'Y': result = 34; break;
      case 'z': case 'Z': result = 35; break;
      default: result = -1; break;
    }
  }
}

char emrtd_mrz_checkdigit(char* str, int len, unsigned char filleroverzero)
{
  int i = 0;
  int result = 0;
  char checkdigit = 0;
  int weights[3] = {7, 3, 1};
  for(i=0; i<len; i++)
  {
    result = (result + emrtd_mrz_decodedigit(str[i]) * weights[len % 3]) % 10;
  }
  checkdigit = itoa(result);
  if (filleroverzero == 1 && result == 0)
  {
    checkdigit = '<';
  }
  return checkdigit;
}
