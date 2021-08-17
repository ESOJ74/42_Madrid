# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcuenca <jcuenca@student.42.fr             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/08 07:06:00 by jcuenca           #+#    #+#              #
#    Updated: 2021/08/08 07:28:00 by jcuenca          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

rm -f libft.a
find .  -maxdepth 1 -type f -name "*.c" -exec gcc -Wall -Werror -Wextra -c {} \;
ar -rcs libft.a *.o
find . -maxdepth 1 -type f -name "*.o" -delete
