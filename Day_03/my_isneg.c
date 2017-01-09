#include	<unistd.h>

int		my_isneg(int n) {
  return n < 0 ? write(1, "N\n", 2) : write(1, "P\n", 2);
}
