/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_recup.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/10 15:01:19 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/17 18:21:05 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_recupend(const char *str, const char *type)
{
	unsigned long int i;
	unsigned long int j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (type[j])
		{
			if (type[j] == str[i])
				return (i);
			j++;
		}
		i++;
	}
	return (0);
}

char		*ft_recup(char *str, int start)
{
	char	*res;
	int		end;

	end = ft_recupend(str + start, "scdxXiup%");
	res = ft_substr(str, start - 1, end + 1);
	return(res);
}
