/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamolomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 09:41:44 by kamolomo          #+#    #+#             */
/*   Updated: 2020/07/15 15:34:22 by kamolomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <unistd.h>
int ft_strlen(char *str){
	int i;

	i=0;
	while(str[i]!='\0'){
		i++;
	}
return(i);
}
