/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:47:16 by sleon             #+#    #+#             */
/*   Updated: 2023/05/19 12:47:28 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

int	main()
{
	{
		Form		F1("Pétition pour virer Manuel le détraqué", 149, 150);
		Bureaucrat	B1("Naelle", 3);
		Bureaucrat	Loser("The loser", 150);

		std::cout << B1 << std::endl;
		std::cout << F1 << std::endl;

		B1.SignForm(F1);
		std::cout<< std::endl;
		B1.SignForm(F1);
		std::cout<< std::endl;

		std::cout << F1 << std::endl;

		Loser.SignForm(F1);

		std::cout << F1 << std::endl;
	}
	return (0);
}

