/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaakrab <zaakrab@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 12:07:04 by zaakrab           #+#    #+#             */
/*   Updated: 2024/11/24 12:07:05 by zaakrab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <fcntl.h>
# include <stddef.h>
# include <stdio.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*ft_strjoin(char *line, char *buff);
char	*ft_strchr(char *s, int c);
size_t	ft_strlen(char *s);
char	*new_line(char *line);
char	*ft_get_line(int fd, char *line);
char	*ft_get_next_line(char	*line);

#endif
