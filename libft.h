/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahhassa <mahhassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 10:15:10 by mahhassa          #+#    #+#             */
/*   Updated: 2026/10/20 13:41:22 by mahhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define	LIBFT_H

#include <stddef.h>
size_t	ft_strlen(const char *s);
int	ft_isalpha(int c);
int	ft_isdigit(int d);
int ft_isalnum(char c);
int	ft_isprint(char c);
int ft_isascii(int c);
int	ft_toupper(char c);
int	ft_tolower(char c);

#endif