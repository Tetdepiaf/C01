/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:38:18 by qdufour           #+#    #+#             */
/*   Updated: 2022/02/09 18:38:24 by qdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min;

	i = 0;
	j = 0;
	min = 0;
	while (j < size)
	{
		while (i < size)
		{
			if (tab[i] < tab[min])
			{
				min = i;
			}
			i++;
		}
		ft_swap(&tab[j], &tab[min]);
		j++;
		i = j;
		min = j;
	}
}
