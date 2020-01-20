/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_count.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 16:16:20 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 16:17:09 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

int		ft_count(const char *str, int start)
{
	int		i;
	int		t;
	char	*n;

	i = start;
	t = 0;
	n = NULL;
	while (ft_isdigit(str[i++]) > 0 && str[i])
		t++;
	n = ft_substr(str, start, t);
	t = atoi(n);
	return (t);
}
