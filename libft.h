/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahhassa <mahhassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 10:15:10 by mahhassa          #+#    #+#             */
/*   Updated: 2026/10/31 12:56:02 by mahhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define	LIBFT_H

#include <stddef.h>
#include <unistd.h>

size_t	ft_strlen(const char *s);
int	ft_isalpha(int c);
int	ft_isdigit(int d);
int	ft_isalnum(char c);
int	ft_isprint(char c);
int	ft_isascii(int c);
int	ft_toupper(char c);
int	ft_tolower(char c);
void	ft_bzero(void *s, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
char	*ft_strchr(const char *s, int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(char* str, int chr);
int 	ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
int	ft_atoi(const char *nptr);
char	*ft_strdup(const char *s);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);

#endif