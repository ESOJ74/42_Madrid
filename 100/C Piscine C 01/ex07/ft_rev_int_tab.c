/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuenca <jcuenca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 09:45:00 by jcuenca           #+#    #+#             */
/*   Updated: 2021/08/08 10:04:00 by jcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_rev_int_tab(int *tab, int size)
{
    int    i;
    int    aux;

    i = 0;
    while (i < size / 2)
    {
        aux = tab[i];
        tab[i] = tab[size - i - 1];
        tab[size - i - 1] = aux;
        i++;
    }
}
