/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secha <secha@student.42seoul.kra>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 17:13:58 by secha             #+#    #+#             */
/*   Updated: 2022/08/28 18:34:25 by jihebang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	x_pos;
	int	y_pos;

	y_pos = 1;
	while (y_pos <= y && x > 0)
	{
		x_pos = 1;
		while (x_pos <= x)
		{
			if ((x_pos == 1 && y_pos == 1) || (x_pos == x && y_pos == 1))
				ft_putchar('A');
			else if ((x_pos == 1 && y_pos == y) || (x_pos == x && y_pos == y))
				ft_putchar('C');
			else if (x_pos == 1 || x_pos == x || y_pos == 1 || y_pos == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
			x_pos++;
		}
		ft_putchar('\n');
		y_pos++;
	}
}
