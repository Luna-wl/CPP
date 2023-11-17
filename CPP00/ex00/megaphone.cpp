/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <wluedara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:16:41 by wluedara          #+#    #+#             */
/*   Updated: 2023/05/10 13:42:36 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YEL "\e[0;33m"

void	mega(char *s)
{
	for(int i = 0; s[i]; i++) {
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = toupper(s[i]);
	}
}

int	main(int ac, char **av)
{
	if (ac >= 2)
	{
		for(int i = 1; i < ac; i++) {
			mega(av[i]);
			std::cout << YEL << av[i];
		}
		std::cout << std::endl;
	}
	else
		std::cout << RED << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return(0);
}
