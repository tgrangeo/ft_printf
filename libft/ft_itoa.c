/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/22 12:41:35 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 11:13:00 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int	ft_taille(long int n)
{
	int			i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i = 1;
		n = n * -1;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	if (n < 10 && n > 0)
		return (i + 1);
	else
		return (i);
}

static char	*ft_zero(long int n)
{
	char *str;

	str = NULL;
	if (n == 0)
	{
		str = malloc(2 * sizeof(char));
		str[0] = n + 48;
		str[1] = '\0';
	}
	return (str);
}

char		*ft_itoa(int n)
{
	char		*str;
	int			len;
	long int	nb;

	len = ft_taille(n);
	nb = (long int)n;
	if (nb == 0)
		return (ft_zero(nb));
	if (!(str = malloc((len + 1) * sizeof(char))))
		return (NULL);
	if (nb <= 0)
	{
		nb = nb * -1;
		str[0] = '-';
	}
	str[len--] = '\0';
	while (nb > 0)
	{
		str[len] = (nb % 10) + 48;
		nb = nb / 10;
		len--;
	}
	return (str);
}

char		*ft_long_itoa(long int n)
{
	char		*str;
	int			len;

	len = ft_taille(n);
	if (n == 0)
		return (ft_zero(n));
	if (!(str = malloc((len + 1) * sizeof(char))))
		return (NULL);
	if (n <= 0)
	{
		n = n * -1;
		str[0] = '-';
	}
	str[len--] = '\0';
	while (n > 0)
	{
		str[len] = (n % 10) + 48;
		n = n / 10;
		len--;
	}
	return (str);
}
