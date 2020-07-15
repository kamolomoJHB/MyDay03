/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamolomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:31:48 by kamolomo          #+#    #+#             */
/*   Updated: 2020/07/15 15:42:47 by kamolomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_putchar(char c){
	write(1, &c, 1);
}

int ft_atoi(char *str){
	int i;
	int k; //T/F

	i =0;
	k =0;
	
	while(k == 0){	
		if((str[i] >= '0' && str[i] <= '9')  || (str[i] == '-') || (str[i] == '+')){
		//	str[i];	
		ft_putchar(str[i]);
		i++;
		}
		else
		{
		k=1;
		}
	}
return(*str);
}
