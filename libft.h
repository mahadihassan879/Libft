/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahhassa <mahhassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 10:15:10 by mahhassa          #+#    #+#             */
/*   Updated: 2026/10/24 17:40:52 by mahhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define	LIBFT_H

#include <stddef.h>
#include <unistd.h>

size_t	ft_strlen(const char *s);
int	ft_isalpha(int c);
int	ft_isdigit(int d);
int ft_isalnum(char c);
int	ft_isprint(char c);
int ft_isascii(int c);
int	ft_toupper(char c);
int	ft_tolower(char c);
void	ft_bzero(void *s, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
char	*ft_strchr(const char *s, int c);

#endif