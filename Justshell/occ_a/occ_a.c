#include<unistd.h>
#include<stdio.h>

int occ_a(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(str[i] != '\0')
	{
		if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if(str[i] ==  'A')
				j++;
		}
			i++;
	}
	return(j);
}

int	main(void)
{
	char	str[] = "salaheddiAA";

	printf("%d", occ_a(str));
			return(0);
}
