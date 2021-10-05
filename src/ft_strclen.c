/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strclen.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/04 14:58:47 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/10/05 13:17:59 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size	ft_strclen(const char *str, char c)
{
	t_i32	i;

	i = 0;
	while (str[++i] != '\0' && str[++i] != c)
		i++;
	return (i);
}
