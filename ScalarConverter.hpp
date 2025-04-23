/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 00:55:00 by atamas            #+#    #+#             */
/*   Updated: 2025/04/23 01:20:28 by atamas           ###   ########.fr       */
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
	void printChar(int num);
	bool pseudoLiteral(std::string input);

	typedef enum e_Type
	{
		CHAR,
		INT,
		FLOAT,
		DOUBLE,
		ERROR
	} t_Type;
#endif
