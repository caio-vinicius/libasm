#include <stdio.h>

int	ft_isspace(char c)
{
	return (c == ' ' ? 1 : 0);
}

int ft_isdigit(char c)
{
	return ((c >= '0' && c <= '9') ? 1 : 0);
}

int	ft_atoi_base(char *nptr, int base)
{
	int i;
	int res;
	//int signal;

	i = 0;
	res = 0;
	/*signal = 1;
	if (!nptr)
		return (0);
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			signal *= -1;
		i++;
	}*/
	while (ft_isdigit(nptr[i]))
	{
		res = (res * base) + nptr[i] - '0';
		i++;
	}
	return (res);
	//return (res * signal);
}

int main(void)
{
	int i;

	i = ft_atoi_base("123", 10);
	printf("%d\n", i);
	return (0);
}
