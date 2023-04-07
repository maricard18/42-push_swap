/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:13:49 by maricard          #+#    #+#             */
/*   Updated: 2023/02/20 11:37:06 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

//C libraries
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

//Buffer size
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

//Function Prototypes
char	*get_next_line(int fd);
char	*ft_read_line(int fd, char *stash);
char	*ft_get_line(char *stash);
char	*ft_remove_line(char *stash);

//Utility functions
int		ft_string_chr(char *buf, char c);
char	*ft_string_join(char *str1, char *str2);
int		ft_string_len(char *str);

#endif
