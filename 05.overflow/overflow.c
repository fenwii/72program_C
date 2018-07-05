#include <stdio.h>
#include <stdlib.h>

main()
{
signed int signed_integer_num_1;
signed int signed_integer_num_2;
unsigned int signed_integer_num;

signed_integer_num_1 = 32767;
signed_integer_num_2 = -32768;
signed_integer_num = 65535;

printf("Signed integer_1=%d\n", signed_integer_num_1);
printf("Signed integer_2=%d\n", signed_integer_num_2);
printf("Signed integer_num=%d\n", signed_integer_num);

signed_integer_num_1 = signed_integer_num_1 + 1;
signed_integer_num_2 = signed_integer_num_2 - 1;
signed_integer_num = signed_integer_num + 1;

printf("Signed integer_1+1=%d\n", signed_integer_num_1);
printf("Signed integer_2-1=%d\n", signed_integer_num_2);
printf("Signed integer_num+1=%d\n", signed_integer_num);

signed_integer_num_1 = signed_integer_num_1 + 1;
signed_integer_num_2 = signed_integer_num_2 - 1;
signed_integer_num = signed_integer_num + 1;

printf("Signed integer_1+2=%d\n", signed_integer_num_1);
printf("Signed integer_2-2=%d\n", signed_integer_num_2);
printf("Signed integer_num+1=%d\n", signed_integer_num);

}
