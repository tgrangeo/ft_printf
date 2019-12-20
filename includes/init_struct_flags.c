/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   init_struct_flags.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/17 16:34:16 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/17 19:02:59 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */


#include "../ft_printf.h"

void		init_struct_flags(struct flags *new, char *str, va_list *list)
{
	int i;

	i = 0;
	new->signe = 0;
	new->zero = 0;
	new->width = 0;
	new->precision = 0;
	new->type = ft_recuptype(str, "scdiuxXp%");
	//printf("s == %s\n", str);
	while (str[i])
	{
		if (str[i] == '-' && str[i - 1] == '%')
			new->signe = 1;
		if (str[i] == '0' && str[i - 1] == '%')
			new->zero = 1;
		if (ft_isdigit(str[i]) > 0 && str[i - 1] != '.' && ft_isdigit(str[i - 1]) == 0)
			new->width = ft_count(str, i);
		if ((ft_isdigit(str[i]) > 0) && str[i - 1] == '.' && (ft_isdigit(str[i - 1]) == 0))
			new->precision = ft_count(str, i);
		if(str[i] == '*' && str[i - 1] != '.')
		{
			new->width = va_arg(*list, int);
			if (new->width < 0)
			{
				new->signe = 1;
				new->zero = 0;
				new->width *= -1;
			}
		}
		if(str[i] == '*' && str[i - 1] == '.')
		{
			new->precision = va_arg(*list, int);
			if (new->precision < 0)
			{
				new->signe = 0;
				new->zero = 0;
				new->precision *= -1;
			}
		}
		i++;
	}
	//TODO:****************************************
	printf("\n---------\nsigne:%d\n", new->signe);
	printf("zero:%d\n", new->zero);
	printf("width:%d\n", new->width);
	printf("precision:%d\n", new->precision);
	printf("type:%c\n--------\n", new->type);
}

char		ft_recuptype(char *str, char *type)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (type[j])
		{
			if (type[j] == str[i])
				return (type[j]);
			j++;
		}
		i++;
	}
	return (0);
}