/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   *ft_strcapitalize                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuenca <jcuenca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 07:06:00 by jcuenca           #+#    #+#             */
/*   Updated: 2021/08/08 07:28:00 by jcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



char	*ft_strcapitalize(char *str)
{
	int		i;
	char	c;
	int		space;

	i = 0;
	while (str[i] != '\0')
	{
		space = 1;
		if (i == 0)
			c = ';';
		else
			c = str[i - 1];
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
			space = 0;
		if (c >= '0' && c <= '9')
			space = 0;
		if (space == 1 && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		if (space == 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
