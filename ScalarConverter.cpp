/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 00:54:56 by atamas            #+#    #+#             */
/*   Updated: 2025/04/19 02:00:07 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
};

ScalarConverter::ScalarConverter(const ScalarConverter &origin)
{
	if (this != &origin)
	{}
};


ScalarConverter& ScalarConverter::operator=(const ScalarConverter &origin)
{
	if (this != &origin)
	{}
	return *this;
};

ScalarConverter::~ScalarConverter()
{
};


void ScalarConverter::convert(const std::string &initial)
{
	std::cout << initial << std::endl;
};
