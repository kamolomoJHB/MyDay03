/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamolomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 09:43:35 by kamolomo          #+#    #+#             */
/*   Updated: 2020/07/15 15:35:59 by kamolomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <unistd.h>
#include <stdio.h>
void ft_putchar(char c){
	write(1, &c, 1);

}
char *ft_strrev(char *str){
	int	i;
	
	i = 0;
	while(str[i] != '\0'){
		i++;
	}

	while(i != 0){
	ft_putchar(str[i - 1]);
		i--;	
	}

return(str);

}
