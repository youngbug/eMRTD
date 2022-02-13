#include <emrtd/mrz.h>

int main()
{
    char checkdigit = 0;
    checkdigit = emrtd_mrz_checkdigit("C12345678", 9, 0);
}