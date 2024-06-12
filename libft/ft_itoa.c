/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astoiano <astoiano@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:25:09 by astoiano          #+#    #+#             */
/*   Updated: 2023/10/03 21:25:12 by astoiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power == 0)
		return (1);
	if (power < 0 || nb == 0)
		return (0);
	while (power > 0)
	{
		res = res * nb;
		power--;
	}
	return (res);
}

static size_t	ft_getlen(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n >= 10)
	{
		n = n / 10;
		len++;
	}
	if (n < 10)
		len++;
	return (len);
}

static char	*resolve_itoa(int n, size_t len)
{
	char	*str;
	int		i;

	i = (int)len;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		*str = '-';
		n = -n;
		len--;
		str++;
	}
	while (len > 0)
	{
		*str = (n / ft_power(10, (int)len -1)) + '0';
		n = n % ft_power(10, (int)len -1);
		len--;
		str++;
	}
	*str = '\0';
	return (str - i);
}

char	*ft_itoa(int n)
{
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	str = resolve_itoa(n, ft_getlen(n));
	return (str);
}
/*
int main()
{
	printf("%zu\n", ft_getlen(1234));
	printf("%s\n", ft_itoa(-1234));
//	printf("%d\n", ft_power(10,2));
}*/
