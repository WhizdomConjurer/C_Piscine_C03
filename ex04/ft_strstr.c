/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reriebsc <reriebsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 09:45:11 by reriebsc          #+#    #+#             */
/*   Updated: 2024/11/25 12:27:46 by reriebsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	x_1;
	int	x_2;

	x_1 = 0;
	while (str[x_1] != '\0')
	{
		x_2 = 0;
		while (to_find[x_2] == str[x_1 + x_2])
		{
			if (to_find[x_2 + 1] == '\0')
			{
				return (str + x_1);
			}
			x_2++;
		}
		x_1++;
	}
	return (0);
}

// int	main(void)
// {
// 	char *str = "needle in a haystack";
// 	char *to_find = "haystack";
// 	char *result;

// 	result = ft_strstr(str, to_find);
// 	printf("%s\n", result);
// 	return (0);
// }
