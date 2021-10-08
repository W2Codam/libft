/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa_base.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/04 14:39:28 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/10/07 09:47:40 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_zero(void)
{
	char	*out;

	out = (char *)ft_calloc(2, sizeof(char));
	out[0] = '0';
	return (out);
}

char	*ft_itoa_base(t_i32 n, t_base base)
{
	char		*out;
	const char	*HEX;
	t_i32		nbrlen;

	HEX = "0123456789ABCDEF";
	nbrlen = ft_intlen(ft_abs(n), base);
	if (n == 0)
		return (ft_zero());
	if (n < 0)
		nbrlen++;
	out = ft_calloc(nbrlen + 1, sizeof(char));
	if (!out)
		return (NULL);
	if (n < 0)
	{
		out[0] = '-';
		n = ft_abs(n);
	}
	while (n)
	{
		out[--nbrlen] = HEX[n % base];
		n /= base;
	}
	return (out);
}
