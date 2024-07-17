#include<unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if(argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			if((i+1) % 3 == 0 && (i+1) % 5 == 0)
			{
				argv[1][i] = '5';
			}
			else if((i+1) % 3 == 0)
			{
				argv[1][i] = '5';
			}
			else if((i+1) % 5 == 0)
			{
				argv[1][i] = '3';
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
}
