/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:02:20 by sleon             #+#    #+#             */
/*   Updated: 2023/05/16 14:21:34 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat* Manu;
	try
	{
		Manu = new Bureaucrat("Manu", -1);
		std::cout << *Manu << std::endl;
		// delete Manu;
	}
	catch (std::exception const & ex)
	{
		std::cout << ex.what() << std::endl;
	}
	try
	{
		Manu = new Bureaucrat("Manu", 156);
		std::cout << *Manu << std::endl;
		delete Manu;
	}
	catch (std::exception const & ex)
	{
		std::cout << ex.what() << std::endl;
	}
	Bureaucrat* Clem;
	try
	{
		Clem = new Bureaucrat("Clem", 147);
		std::cout << *Clem << std::endl;
		Clem->DecrementGrade();
		std::cout << *Clem << std::endl;
		Clem->DecrementGrade();
		std::cout << *Clem << std::endl;
		Clem->DecrementGrade();
		std::cout << *Clem << std::endl;
		Clem->DecrementGrade();
		std::cout << *Clem << std::endl;
	}
	catch (std::exception const & ex)
	{
		std::cout << ex.what() << std::endl;
	}
	delete Clem;
	Bureaucrat* Alex;
	try
	{
		Alex = new Bureaucrat("Alex", 3);
		std::cout << *Alex << std::endl;
		Alex->IncrementGrade();
		std::cout << *Alex << std::endl;
		Alex->IncrementGrade();
		std::cout << *Alex << std::endl;
		Alex->IncrementGrade();
		std::cout << *Alex << std::endl;
		Alex->IncrementGrade();
		std::cout << *Alex << std::endl;
	}
	catch (std::exception const & ex)
	{
		std::cout << ex.what() << std::endl;
	}
	delete Alex;
	return (0);
}
