/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakyuz <aakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:38:17 by aakyuz            #+#    #+#             */
/*   Updated: 2024/12/04 03:42:20 by aakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
# include <stdlib.h>
# include <unistd.h>

char	*ft_strdup_gnl(char *s);
size_t	ft_strlen_gnl(char *s);
char	*ft_substr_gnl(char *s, size_t start, size_t len);
char	*ft_strjoin_gnl(char *s1, char *s2);
void	fill_str(char *res, char *s1, char *s2);

#endif
