
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	unsigned long long	res;
	int					sign;

	res = 0;
	sign = 1;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr && ft_isdigit(*nptr))
	{
		res = (res * 10) + (*nptr - '0');
		if (res > LLONG_MAX && sign == 1)
			return (-1);
		if (res > LLONG_MAX && sign == -1)
			return (0);
		nptr++;
	}
	return (res * sign);
}
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     printf("%d \n", atoi("-15"));
//     printf("%d", ft_atoi("-15"));
// }