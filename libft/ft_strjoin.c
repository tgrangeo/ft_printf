/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/14 16:42:24 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 18:23:28 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*str;
	int		len;

	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(str = malloc(len * sizeof(char))))
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[j++];
		i++;
	}
	j = 0;
	while (s2[j] && i < len)
	{
		str[i] = s2[j];
		j++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
