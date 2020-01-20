/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   init_struct_flags.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/17 16:34:16 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 16:54:17 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

int			init_struct_flags(struct flags *new, char *str, va_list list)
{
	int i;

	i = 0;
	new->signe = 0;
	new->zero = 0;
	new->width = 0;
	new->precision = -2;
	new->type = ft_recuptype(str + 1, "scdiuxXp%");
	new->end = ft_recupend(str + 1, "scdiuxXp%");
	ft_init_struct_flags2(str, new);
	ft_init_struct_flags3(str, new, list, i);
	if (new->type > 0)
		return (1);
	else
		return (0);
}

void		ft_init_struct_flags2(char *str, struct flags *new)
{
	int i;

	i = 0;
	while (str[i] && i < new->end)
	{
		if (str[i] == '-' && (str[i - 1] == '%' || str[i - 1] == '0'))
		{
			new->signe = 1;
			new->zero = 0;
		}
		if (str[i] == '0' && str[i - 1] == '%' && new->signe != 1)
			new->zero = 1;
		if (str[i] == '.' && new->end >= 0)
			new->precision = -1;
		if (ft_isdigit(str[i]) > 0 && str[i - 1] != '.'
				&& ft_isdigit(str[i - 1]) == 0)
			new->width = ft_count(str, i);
		if ((ft_isdigit(str[i]) > 0) && str[i - 1] == '.'
				&& (ft_isdigit(str[i - 1]) == 0))
			new->precision = ft_count(str, i);
		i++;
	}
}

void		ft_init_struct_flags3(char *str, struct flags *new,
									va_list list, int i)
{
	while (str[i] && i < new->end)
	{
		if (str[i] == '*' && str[i - 1] != '.')
		{
			new->width = va_arg(list, int);
			if (new->width < 0)
			{
				new->signe = 1;
				new->zero = 0;
				new->width *= -1;
			}
		}
		if (str[i] == '*' && str[i - 1] == '.')
		{
			new->precision = va_arg(list, int);
			if (new->precision < 0)
			{
				new->signe = 0;
				new->zero = 0;
			}
		}
		i++;
	}
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

int			ft_recupend(const char *str, const char *type)
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
				return (i + 1);
			j++;
		}
		i++;
	}
	return (-1);
}