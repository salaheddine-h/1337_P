#include<stdio.h>

int	count_alen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == 'a')
		{
			return(i);
		}
		i++;
	}
	return(i);
}
int	main(void)
{
	char	tpp[] = "slhedinepoa";
	char	gg[] = "ggggggg";

	printf("%d\n", count_alen(tpp));
	printf("%d\n", count_alen(gg));
	return(0);
}
