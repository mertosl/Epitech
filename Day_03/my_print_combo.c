#include	<unistd.h>

int		my_print_combo()
{
  char		a;
  char		b;
  char		c;

  a = '0';
  while (a <= '7')
    {
      b = a + 1;
      while (b <= '8')
	{
	  c = b + 1;
	  while (c <= '9')
	    {
	      write(1, &a, 1);
	      write(1, &b, 1);
	      write(1, &c, 1);
	      write(1, a == '7' && b == '8' && c == '9' ? "\n" : ", ",
		    a == '7' && b == '8' && c == '9' ? 1 : 2);
	      c = c + 1;
	    }
	  b = b + 1;
	}
      a = a + 1;
    }
  return 0;
}

int main() {
  return my_print_combo();
}
