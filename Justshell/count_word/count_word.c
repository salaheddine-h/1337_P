#include<stdio.h>

char	count_word(char *str)
{
	int	i;
	int	ws;

	ws = 0;
	i = 0;
	while(str[i] != '\0')
	{
		while(str[i] == 32 || str[i] == '\t')
			i++;
		if(str[i] != 32 || str[i] != '\t')
		{
			ws++;
		}
		while(str[i] >= 33 && str[i] <= 126)
			i++;
	}
	return(ws);
}
int	main(void)
{
	char	stt[] = "   kf kf  jdj jdj djd jdjd jdjd jdjd    ";

	printf("%d", count_word(stt));
	return(0);
}
