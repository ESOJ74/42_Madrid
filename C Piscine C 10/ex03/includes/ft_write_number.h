/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_number.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuenca <jcuenca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 07:06:00 by jcuenca           #+#    #+#             */
/*   Updated: 2021/08/08 07:28:00 by jcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_WRITE_NUMBER_H
# define FT_WRITE_NUMBER_H

# define MAX_BUFFER_SIZE 14

void	ft_buffer_number(int number, int radix, int buffer[], int index);

void	ft_write_number(unsigned int number, int radix, int char_count);

void	ft_write_safe_char(char *c);

#endif
