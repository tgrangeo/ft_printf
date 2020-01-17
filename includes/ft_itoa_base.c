/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa_base.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/06 12:56:27 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 15:16:56 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

static int		ft_taille(long int n, int len_base)
{
	int			i;

	i = 0;
	if (n == 0)
		return (1);
	while (n >= len_base)
	{
		n = n / len_base;
		i++;
	}
	return (i);
}

char			*ft_itoa_base(unsigned long n, char *base)
{
	char		*str;
	int			len;
	int			len_base;
	long int	nb;
	int			rest;

	if (n == 0)
		return (ft_strdup("0"));
	nb = n;
	len_base = ft_strlen(base);
	len = ft_taille(nb, len_base);
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	while (nb > 0 && len >= 0)
	{
		rest = nb % len_base;
		str[len] = base[rest];
		nb = nb / len_base;
		len--;
	}
	return (str);
}
