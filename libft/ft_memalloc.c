/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttshivhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 08:43:36 by ttshivhu          #+#    #+#             */
/*   Updated: 2017/05/30 08:44:44 by ttshivhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t t)
{
	void *memory;

	memory = malloc(t);
	if (memory == NULL)
		return (NULL);
	ft_bzero(memory, t);
	return (memory);
}
