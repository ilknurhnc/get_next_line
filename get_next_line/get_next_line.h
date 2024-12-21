/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihancer <ihancer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 00:30:46 by ihancer           #+#    #+#             */
/*   Updated: 2024/11/08 11:58:12 by ihancer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4

# endif

int		ft_strlen(char const *str);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(const char *s);
int		new_check(const char *s);
char	*get_next_line(int fd);
char	*ft_getline(char *s);
char	*ft_read(int fd, char *str);

#endif
