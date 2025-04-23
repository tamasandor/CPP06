/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 00:54:56 by atamas            #+#    #+#             */
/*   Updated: 2025/04/23 02:10:09 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "cstdlib"


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

t_Type detectType(const std::string &initial)
{
	size_t i = 0;

	if (initial[0] == '+' || initial[0] == '-')
		i++;
	for (; i < initial.length(); i++)
	{
		if (std::isdigit(initial[i]) == 0)
			break;
	}
	if (initial[i] == '\0')
		return (INT);
	if (initial.length() == 1)
		return (CHAR);
	if (initial[i] == '.')
		i++;
	for (; i < initial.length(); i++)
	{
		if (std::isdigit(initial[i]) == 0)
			break;
	}
	if (initial[i] == '\0')
		return (DOUBLE);
	else if (initial[i] == 'f')
		return (FLOAT);
	return (ERROR);
}

void printChar(const int num)
{
	if (std::isprint(num) == 0)
	{
		std::cout << "char: Non displayable" << std::endl;
		return ;
	}
	std::cout << "char: '" << static_cast<char>(num) << "'" << std::endl;
}

bool pseudoLiteral(std::string input)
{
	for (size_t i = 0; i < input.length(); i++)
	{
		input[i] = std::tolower(input[i]);
	}
	if (input == "-inff" || input == "-inf" || input == "+inff" || input == "+inf" || input == "nanf" || input == "nan")
	{
		std::cout << "char: impossible" << '\n';
		std::cout << "int: impossible" << '\n';
		std::cout << "float: " << std::atof(input.c_str()) << 'f' << '\n';
		std::cout << "double: " << std::atof(input.c_str()) << '\n';
		return true;
	}
	return false;
}

void ScalarConverter::convert(const std::string &initial)
{
	/*
	*** TEST ***
	*/
	std::cout << initial << std::endl;
	int num = std::atoi(initial.c_str());
	std::cout << "Using atoi: " << num << std::endl;
	/*
	*** TEST ***
	*/

	// detect what type is it and call appropriate functions
	// for float and double values adding the .0(f) after the number should be enough
	if (pseudoLiteral(initial))
	return ;
	switch (detectType(initial))
	{
		case CHAR:
			std::cout << "Probably a char" << std::endl;
			printChar(num);
			break;
		case INT:
			std::cout << "Probably an int" << std::endl;
			break;
		case FLOAT:
			std::cout << "Probably a float" << std::endl;
			break;
		case DOUBLE:
			std::cout << "Probably a double" << std::endl;
			break;
		case ERROR:
			std::cerr << "Incorrect type!" << std::endl;
			break;
	}
	
	/*
	*** TEST ***
	*/
	// printChar(num);
	/*
	*** TEST ***
	*/
};
