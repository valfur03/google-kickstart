/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 21:27:33 by vfurmane          #+#    #+#             */
/*   Updated: 2020/12/21 12:39:07 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_sort_desc(int *tab, int len)
{
	int	i;
	int	tmp;
	int	is_solved;

	is_solved = 0;
	while (!is_solved)
	{
		is_solved = 1;
		i = 0;
		while (i < len - 1)
		{
			if (tab[i] < tab[i + 1])
			{
				is_solved = 0;
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
	}
}

void	ft_h_index(int *tab, int len)
{
	int	i;
	int	h;
	int	*A;

	if (!(A = malloc(sizeof(*A) * len)))
		return ;
	i = -1;
	while (++i < len)
		A[i] = tab[i];
	ft_sort_desc(A, len);
	i = 0;
	h = 0;
	while (i < len)
	{
		if (A[i] >= h + 1)
			h++;
		else
			break ;
		i++;
	}
	printf("%d", h);
	free(A);
}

void	ft_solve()
{
	int	i;
	int	n;
	int	*A;

	scanf("%d", &n);
	if (!(A = malloc(sizeof(*A) * n)))
		return ;
	i = 0;
	while (i < n)
	{
		scanf("%d", &A[i]);
		i++;
	}
	i = 0;
	while (i < n)
	{
		ft_h_index(A, i + 1);
		printf(i == n - 1 ? "\n" : " ");
		i++;
	}
	free(A);
}

int		main()
{
	int	i;
	int	t;

	scanf("%d", &t);
	i = 0;
	while (i < t)
	{
		printf("Case #%d: ", i + 1);
		ft_solve();
		i++;
	}
	return (0);
}
