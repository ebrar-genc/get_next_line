/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenc <egenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:03:08 by egenc             #+#    #+#             */
/*   Updated: 2022/02/10 20:22:44 by egenc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif

char	*get_next_line(int fd);
char	*get_str(int fd, char *str);
char	*get_line(char *str);
char	*get_next_new_str(char *str);

int		ft_strlen(char *str);
int		ft_strchr(char *str, char c);
char	*ft_strjoin(char *str, char *buff);

#endif