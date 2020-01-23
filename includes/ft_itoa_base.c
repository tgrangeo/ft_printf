/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa_base.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/06 12:56:27 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/22 16:40:38 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libftprintf.h"

static int			ft_taille(long long n, char *base)
{
	int				len_base;
	int				i;

	len_base = ft_strlen(base);
	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n = n / len_base;
		i++;
	}
	return (i);
}

static int			ft_long_taille(unsigned long n, char *base)
{
	int				len_base;
	int				i;

	len_base = ft_strlen(base);
	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / len_base;
		i++;
	}
	return (i);
}

char				*ft_itoa_base(long n, char *base)
{
	long int		nb;
	long int		len;
	char			*res;
	int				len_base;

	len_base = ft_strlen(base);
	len = ft_taille(n, base);
	nb = n;
	if (!(res = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	res[len--] = '\0';
	if (nb == 0)
		res[0] = 0 + 48;
	if (nb < 0)
	{
		res[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		res[len--] = base[(nb % len_base)];
		nb = nb / len_base;
	}
	return (res);
}

char				*ft_long_itoa_base(unsigned long n, char *base)
{
	long int		len;
	char			*res;
	int				len_base;

	len_base = ft_strlen(base);
	len = ft_long_taille(n, base);
	if (!(res = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	res[len--] = '\0';
	if (n == 0)
		res[0] = 0 + 48;
	while (n > 0)
	{
		res[len--] = base[(n % len_base)];
		n = n / len_base;
	}
	return (res);
}
