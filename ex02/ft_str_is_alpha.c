/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihebang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:11:56 by jihebang          #+#    #+#             */
/*   Updated: 2022/09/04 16:35:06 by jihebang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (1);
	while (str[i] != '\0')
	{
		if (('a' <= str[i] && str[i] <= 'z')
			|| ('A' <= str[i] && str[i] <= 'Z'))
			return (1);
		i++;
	}
	return (0);
}
