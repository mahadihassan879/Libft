/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahhassa <mahhassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 15:03:19 by mahhassa          #+#    #+#             */
/*   Updated: 2026/10/27 18:31:03 by mahhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char*str, int c)
{
	char	*last;

	last = NULL;
	while (*str != '\0')
	{
		if (*str == (char *)c)
		{
			last = ((char *)c);
		}
		str++;
	}
	if (*str == (char *)c)
	{
		return ((char *)str);
	}
	return (last);
}
