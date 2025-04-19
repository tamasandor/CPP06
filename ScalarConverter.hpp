/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 00:55:00 by atamas            #+#    #+#             */
/*   Updated: 2025/04/19 01:59:36 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER
#define SCALARCONVERTER

#include <string>
#include <iostream>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &original);
		ScalarConverter &operator=(const ScalarConverter &original);
	
	public:
		~ScalarConverter();
		static void convert(const std::string &initial);
};

#endif
