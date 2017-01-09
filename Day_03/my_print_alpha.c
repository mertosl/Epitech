#include	<unistd.h>

int		my_print_alpha()
{
  return write(1, "abcdefghijklmnopqrstuvwxyz\n", 28);
}
