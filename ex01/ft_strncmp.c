/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reriebsc <reriebsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:26:57 by reriebsc          #+#    #+#             */
/*   Updated: 2024/11/25 12:26:58 by reriebsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while (x <= n && (s1[x] || s2[x]))
	{
		if (s1[x] != s2[x])
			return ((unsigned char)s1[x] - (unsigned char)s2[x]);
		x++;
	}
	return (0);
}

// int	main(void)
// {
// 	int	x;
// 	char	s1[] = "Are we ezual?5";
// 	char	s2[] = "Are we eqaal?";

// 	x = ft_strncmp(s1, s2, 8);
// 	printf("%d\n", x);
// 	if (x == 0)
// 		printf("The strings are Equal \n");
// 	if (x > 0)
// 		printf("The first string is Larger than the second string");
// 	if (x < 0)
// 		printf("The second string is Larger than the first string");
// 	return (0);
// }
