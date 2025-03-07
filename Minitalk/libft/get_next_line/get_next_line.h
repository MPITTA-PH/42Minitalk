/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelhenriques <miguelhenriques@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:50:32 by luarodri          #+#    #+#             */
/*   Updated: 2025/02/26 15:28:41 by miguelhenri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

char	*get_next_line(int fd);
char	*function_read(int fd, char *str);
char	*ft_getlines(char *left);
char	*ft_getlefts(char *left);
size_t	ft_strlen(char *s, char c);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(char *s, int c);

#endif
