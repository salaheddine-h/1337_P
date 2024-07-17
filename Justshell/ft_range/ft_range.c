#include<stdlib.h>

int	*ft_range(int start, int end)
{
	int	*range;
	int	len;
	int	i;

	if(start > end)
		len = (start - end) + 1;
	else
		len = (end - start) + 1;

	range = (int *)malloc(sizeof(int) * len);
	if(!range)
		return(NULL);

	i = 0;
	whike(i < len)
	{
		range[i] = start;
		if(start < end)
			start++;
		else 
			start--;
		i++;
	}
	return(range);
}
