/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttshivhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 09:04:44 by ttshivhu          #+#    #+#             */
/*   Updated: 2017/07/28 09:06:44 by ttshivhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_first_word(char *str)
{
	int		i;
	char	*ret;

	i = 0;
	while (!ft_is_blank(str[i]))
		i++;
	ret = (char *)malloc(sizeof(char) * i);
	i = 0;
	while (!ft_is_blank(str[i]))
	{
		ret[i] = str[i];
		i++;
	}
	return (ret);
}
