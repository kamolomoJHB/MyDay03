/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimimate_div_mod.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamolomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 09:24:46 by kamolomo          #+#    #+#             */
/*   Updated: 2020/07/15 15:29:58 by kamolomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_ultimate_div_mod(int *a, int *b){
	int *Temp; 
	*Temp	= *a;
	*a = (*Temp)/ (*b);
	*b = (*Temp) % (*b)
}
