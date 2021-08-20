/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuenca <jcuenca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 07:06:00 by jcuenca           #+#    #+#             */
/*   Updated: 2021/08/08 07:28:00 by jcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_FILE_H
# define DISPLAY_FILE_H

# define BUFFER_SIZE 1024

# define MSG_ERR_NO_FILE "File name missing.\n"
# define MSG_ERR_TOO_MANY_ARGS "Too many arguments.\n"
# define MSG_ERR_CANNOT_READ "Cannot read file.\n"

# define IN 0
# define OUT 1
# define ERR 2

/*
** DISPLAY_FILE.c
*/
int	display_file(char *path);

/*
** STRING_UTILS.c
*/
void	str_write(int fd, char *str);

#endif
