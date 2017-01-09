#include	<unistd.h>

void		my_putchar(char c)
{
  write(1, &c, 1);
}

int		my_print_combn2(int n, char c)
{

int		my_print_combn(int n)
{
  int		a;
  
  a = '0';
  my_print_combn2(n, a);
  return 0;
}

int		main()
{
  my_print_combn(1);
  my_print_combn(2);
  my_print_combn(3);
  return 0;
}
