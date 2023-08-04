/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naterrie <naterrie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 16:21:01 by naterrie          #+#    #+#             */
/*   Updated: 2023/08/04 18:46:38 by naterrie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

static void megaphone(char *str)
{
	std::string	s(str);
	int i = 0;

	while (str[i])
	{
		s[i] = std::toupper(str[i]);
		i++;
	}
	std::cout << s;
}

int main(int argc, char **argv)
{
	int	i = 1;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (i < argc)
		{
			megaphone(argv[i]);
			i++;
		}
	}
	std::cout << std::endl;
	return 0;
}
