/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/11 12:40:23 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 12:46:13 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*dest;
	int		j;

	j = 0;
	dest = NULL;
	if (!src)
		return (NULL);
	while (src[j] != '\0')
		j++;
	i = 0;
	if (!(dest = malloc(sizeof(char) * (j + 1))))
		return (0);
	while (src[i] != '\0' && i <= j)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
