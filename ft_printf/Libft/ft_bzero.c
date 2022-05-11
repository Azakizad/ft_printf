/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azakizad <azakizad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:55:36 by azakizad          #+#    #+#             */
/*   Updated: 2022/05/04 17:54:13 by azakizad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function that erases the data in the next 'n' bytes of memory starting from
 * the location pointed to by 's', by writing null bytes to that area.
 */

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;

	ptr = s;
	while (n != 0 && n > 0)
	{
		*ptr = '\0';
		++ptr;
		--n;
	}
}
