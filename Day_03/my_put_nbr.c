#include	<unistd.h>

void		my_putchar(char c)
{
  write(1, &c, 1);
}

int		my_put_nbr(int nbr)
{
  int		chiffre;

  if (nbr > 0)
    {
      chiffre = nbr % 10;
      nbr = nbr / 10;
      if (nbr > 0)
	my_put_nbr(nbr);
      my_putchar(chiffre + 48);
    }
  else if (nbr == 0)
    my_putchar(48);
  if (nbr < 0)
    {
      my_putchar('-');
      nbr = -nbr;
      my_put_nbr(nbr);
    }
  return 0;
}
