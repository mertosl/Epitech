#include	<unistd.h>

int		my_print_digits()
{
  return write(1, "0123456789\n", 11);
}
