/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thomasgrangeon <thomasgrangeon@student.    +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/14 16:42:24 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/27 10:23:52 by thomasgrang ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(const char *s1,const char *s2)
{
	int		i;
	size_t		j;
	char	*new;

	j = 0;
	i = 0;
	new = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	while (s1[j])
	{
		new[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	if (s2[j] != '\0')
		while (s2[j])
		{
			new[i] = s2[j];
			i++;
			j++;
		}
	//free(s2);
	//free(s1);
	new[i] = '\0';
	return (new);
}
