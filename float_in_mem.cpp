/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float_in_mem.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouramd <abouramd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:49:29 by abouramd          #+#    #+#             */
/*   Updated: 2023/07/20 11:03:45 by abouramd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>

int	convert(std::string s)
{
	int	dec;
	int	pow;

	dec = 0;
  pow = 1;
	for (int i = s.size() - 1; i >= 0; i--)
	{
		if (s[i] == '0')
			pow *= 2;
		if (s[i] == '1')
		{
			dec += pow;
			pow *= 2;
		}
	}
	return (dec);
}

int	main(void)
{
	float			num;
	unsigned int	*bytes;

	num = 0.25; // Change this to the number you want to observe
	bytes = (unsigned int *)(&num);
	std::string bit;
	for (int i = 31, j = 0; i >= 0; i--)
	{
		bit += (((*bytes) >> i) & 1) + '0';
		if (i == 31 || i == 23)
			bit += " ";
	}
	std::cout << "Memory representation of the float value " << "\033[1;31m[ " << num << " ]\033[0m" << ": " << bit << std::endl;
	std::cout << "Sign: " << "\033[1;32m" << bit.substr(0, 1) << "\033[0m" << bit.substr(1) << std::endl;
	std::cout << "Exponent: " << bit.substr(0, 2) << "\033[1;32m" << bit.substr(2, 8) << "\033[0m" << bit.substr(10) << std::endl;
	std::cout << "Fraction (mantissa): " << bit.substr(0, 11) << "\033[1;32m" << bit.substr(11) << "\033[0m" << std::endl;
	std::cout << "Exponent in dec: " << convert(bit.substr(2, 8)) << "  (" << convert(bit.substr(2, 8)) - 127 << ")" << std::endl;
	return (0);
}
