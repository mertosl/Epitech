#include	<unistd.h>

int		my_print_revalpha()
{
  return write(1, "zyxwvutsrqponmlkjihgfedcba\n", 28);
}
