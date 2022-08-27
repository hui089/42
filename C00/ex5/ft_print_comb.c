/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihebang <jihebang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 03:03:45 by jihebang          #+#    #+#             */
/*   Updated: 2022/08/27 02:54:53 by jihebang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>


	int n[10] = {0,1,2,3,4,5,6,7,8,9};
	int r=3;
	int result[3];
	int level = 0;
	int begin =0;

	void	DFS(level,begin)
	{
		if (level ==r ){
			for(int i=0;i<3;i++){
				printf("%d ",result[i]);
			}
			printf("\n");
		}
		else{
			while(begin<10){
				result[level] = n[begin];
				DFS(level+1,begin+1);
				begin++;
			}
		}
	}

int main(){
DFS(0,0);
}
