/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa_base.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/04 14:39:28 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/11/17 10:48:08 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(t_i32 n, t_base base)
{
	char	*out;
	char	*HEX;
	t_i32	numlen;

	if (!n)
		return (ft_strdup("0"));
	HEX = "0123456789ABCDEF";
	numlen = ft_intlen(n, base);
	if (n < 0)
		numlen++;
	out = ft_calloc(numlen + 1, sizeof(char));
	if (!out)
		return (NULL);
	if (n < 0)
	{
		out[0] = '-';
		n = ft_abs(n);
	}
	while (n)
	{
		out[--numlen] = HEX[n % base];
		n /= base;
	}
	return (out);
}
