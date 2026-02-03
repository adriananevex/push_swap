/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:36:54 by aneves            #+#    #+#             */
/*   Updated: 2025/11/11 20:04:08 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_list
{
  void        *content;
  struct s_list  *next;
}              t_list;

t_list    *ft_lstnew(void *content);
void      ft_lstadd_front(t_list **lst, t_list *new);
int       ft_lstsize(t_list *lst);
t_list	  *ft_lstlast(t_list *lst);
void	    ft_lstadd_back(t_list **lst, t_list *new);
void	    ft_lstdelone(t_list *lst, void (*del)(void *));
void	    ft_lstclear(t_list **lst, void (*del)(void *));
void	    ft_lstiter(t_list *lst, void (*f)(void *));
t_list	   *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

int		ft_isalpha(int i);
int		ft_isdigit(int i);
int		ft_isalnum(int i);
int		ft_isascii(int i);
int		ft_isprint(int i);
size_t	ft_strlen(const char *c);
void	*ft_memset(void *b, int i, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t dst_size);
int		ft_toupper(int i);
int		ft_tolower(int i);
char	*ft_strchr(const char *s, int i);
char	*ft_strrchr(const char *c, int i);
int		ft_strncmp(const char *c1, const char *c2, size_t n);
void	*ft_memchr(const void *c, int i, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *c);

char	*ft_substr(char const *c, unsigned int start, size_t len);
char	*ft_strjoin(char const *c1, char const *c2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif
