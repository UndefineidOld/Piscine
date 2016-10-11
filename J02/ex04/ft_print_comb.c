#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char n1;
	char n2;
	char n3;

	n1 = '0' - 1;
	while (++n1 <= 55)
	{
		n2 = n1 + 1;
		while (++n2 <= 57)
		{
			n3 = n2 + 1;
			while (++n3 <= 59)
			{
				ft_putchar(n1);
				ft_putchar(n2 - 1);
				ft_putchar(n3 - 2);
				if (n1 == '7' && n2 == 57  && n3 == 59)
					ft_putchar('\n');
				else
					ft_putchar(',');
			}
		}
	}
}
int main()
{
	ft_print_comb();
	return 0;
}
