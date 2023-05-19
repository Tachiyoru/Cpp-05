/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:47:16 by sleon             #+#    #+#             */
/*   Updated: 2023/05/19 13:54:02 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	Bureaucrat	B1("Shanley", 2);

	{
		PresidentialPardonForm	FormPresident("Manuel");

		std::cout  << B1 << std::endl;
		std::cout << FormPresident << std::endl;

		FormPresident.execute(B1);
	}

	{
		RobotomyRequestForm	RobotomyRq("Manuel");

		std::cout  << B1 << std::endl;
		std::cout << RobotomyRq << std::endl;

		RobotomyRq.execute(B1);
	}

	{
		ShrubberyCreationForm	Shrub("Manuel");

		std::cout  << B1 << std::endl;
		std::cout << Shrub << std::endl;

		Shrub.execute(B1);
	}

	return (0);
}

