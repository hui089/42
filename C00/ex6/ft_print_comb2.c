/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihebang <jihebang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 01:54:05 by jihebang          #+#    #+#             */
/*   Updated: 2022/08/28 02:01:09 by jihebang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_print_comb2(void){
	for(int i=0;i<=99;i++){
		int j=1;	
		while(j<=99){
			if(i==98)
			{
				write(1,"98 99",5);
				return;
			}
			if(j>i)
			{
				if(i<10)
					ft_putchar('0');
				write(1,&i,1);
				if(j<10)
					ft_putchar('0');
				write(1,&j,1);
				j++;
			}
			else{
				while(j<=i)
					j++;
			}
		}
	}
}

int main(){
	ft_print_comb2();
}

