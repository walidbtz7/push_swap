/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <wboutzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:08:18 by wboutzou          #+#    #+#             */
/*   Updated: 2022/07/03 02:12:10 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPERS_H
# define HELPERS_H
# include <unistd.h>
# include <stdlib.h>

size_t	ft_strlen(const char *str);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	**ft_split(char const *s, char c);
int		ft_strcmp(char	*s1, char	*s2);
char	*ft_strdup(const	char *s1);
char	*ft_strldup(const char *s1, int len);
char	*ft_strjoin(char	*s1, char	*s2);
char	*ft_strrchr(const	char *s, int c);
char	*ft_strchr(char *s, int c);
char	*ft_substr(char	const *s, unsigned	int start, size_t len);
#endif