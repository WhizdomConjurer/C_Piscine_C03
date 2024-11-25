/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reriebsc <reriebsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 10:45:19 by reriebsc          #+#    #+#             */
/*   Updated: 2024/11/25 12:26:50 by reriebsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	x;

	x = 0;
	while (s1[x] != '\0' && s1[x] == s2[x])
	{
		x++;
	}
	return ((unsigned char)s1[x] - (unsigned char)s2[x]);
}

// int	main(void)
// {
// 	int	x;
// 	char	s1[] = "Are we equal?";
// 	char	s2[] = "Are we equal";

// 	x = ft_strcmp(s1, s2);
// 	printf("%d\n", x);
// 	if (x == 0)
// 		printf("The strings are Equal \n");
// 	if (x > 0)
// 		printf("The first string is Larger than the second string");
// 	if (x < 0)
// 		printf("The second string is Larger than the first string");
// 	return (0);
// }
