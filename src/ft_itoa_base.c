/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa_base.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/04 14:39:28 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/10/04 15:10:05 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(t_i32 n, t_base base)
{
	t_i32	len;
	t_i32	i;
	char	*out;
	char	*HEX_STRING;

	i = 0;
	len = ft_intlen(n, base);
	HEX_STRING = "0123456789ABCDEF";
	if (n < 0)
		len++;
	out = (char *)malloc(len * sizeof(char) + 1);
	if (n < 0)
	{
		out[i++] = '-';
		n = ft_abs(n);
	}
	while (n)
	{
		out[i++] = HEX_STRING[n % base];
		n /= base;
	}
	out[len] = '\0';
	return (out);
}
