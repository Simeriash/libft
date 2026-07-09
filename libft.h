/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:33:42 by julauren          #+#    #+#             */
/*   Updated: 2026/07/09 13:19:31 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <limits.h>
# include <stdarg.h>
# include <fcntl.h>

/*===============LIBFT===============*/

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_isspace(int c);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *str, int c, size_t n);
void	ft_bzero(void *str, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strcpy(char *dest, char *src);
size_t	ft_strlcpy(char *dest, char *src, size_t n);
size_t	ft_strcat(char *dest, char *src);
size_t	ft_strlcat(char *dest, char *src, size_t n);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_strchr(char *str, char c);
int		ft_strrchr(char *str, char c);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strnstr(char *s1, char *s2, size_t n);
int		ft_atoi(char *str, int *nbr);
void	*ft_calloc(size_t nmemb, size_t size);
char	**ft_tabdup(char **tab);
char	*ft_strdup(const char *str);
char	*ft_substr(char *str, unsigned int start, size_t len);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strtrim(char *str, char *set);
char	**ft_split(char *str, char c);
char	*ft_itoa(long n);
char	*ft_strmapi(const char *src, char (*f)(unsigned int, char));
void	ft_striteri(char *str, void (*f)(unsigned int, char*));
char	*ft_read_file(char *str);

/*===============PRINTF==============*/

int		ft_printf_fd(int fd, const char *str, ...);
int		ft_putchar_fd(char c, int fd);
ssize_t	ft_putstr_fd(char *str, int fd);
ssize_t	ft_putendl_fd(char *str, int fd);
ssize_t	ft_putnbr_fd(long n, int fd);
int		ft_putnbr(long nbr, int base, int p, int lc);

#endif
