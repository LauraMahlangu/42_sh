/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttshivhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 11:45:29 by ttshivhu          #+#    #+#             */
/*   Updated: 2017/05/29 11:53:59 by ttshivhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s1, int c, size_t n)
{
	char		tmp;
	char		*tmp2;

	tmp = (unsigned char)c;
	tmp2 = (char*)s1;
	while (n--)
	{
		if (*tmp2 == tmp)
			return (tmp2);
		tmp2++;
	}
	return (NULL);
}
