#include<unistd.h>


void	putnbr(int nb)
{
	if(nb >= 0)
	{
		putnbr(nb / 10)
	nb = nb -
	}
}
int	main(void)
{
	int		i;

	i = 0;
	while(number <= 100)
	{
		if(number % 3 == 0 && number % 5 == 0)
		{
			write(1, "fizzbuzz", 8);
		}
		else if(number % 3 == 0)
		{
			write(1, "fizz", 4);
		}
		else if(number % 5 == 0)
		{
			write(1, "buzz", 4);
		}
		else 
			ft_putchar(number);
		write(1, "\n", 1);
		number++;
	}
	return(0);
}
