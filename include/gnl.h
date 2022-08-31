/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:45:06 by lgomes-o          #+#    #+#             */
/*   Updated: 2022/07/16 13:50:00 by lgomes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# ifndef FD_MAX
#  define FD_MAX 4096
# endif

# include "libft.h"

size_t	ft_gnlstrlen(char *str);
char	*ft_gnlstrchr(char *str, int c);
char	*ft_gnljoin(char *s1, char *s2);
char	*get_next_line(int fd);
char	*get_next_line_multi(int fd);

#endif
