/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamolomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 15:44:19 by kamolomo          #+#    #+#             */
/*   Updated: 2020/07/15 16:00:31 by kamolomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>



void ft_sort_integer_table(int *tab, int size){
	int i;
	int j;
	int Temp;

	i=0;
	j=size;

	while (i < (size-1)){
		if(tab[i] > tab[i+1]){
			Temp = tab[i];
			tab[i] = tab[i+1];
			tab[i+1] = Temp;
		}
		i++;
	}
}
