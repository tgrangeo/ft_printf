/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/14 16:42:24 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/20 18:44:16 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
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
