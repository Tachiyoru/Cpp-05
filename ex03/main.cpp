/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:47:16 by sleon             #+#    #+#             */
/*   Updated: 2023/05/19 14:51:46 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	Intern someRandomIntern;
	AForm* rrf;
	Bureaucrat Manu("Manuel", 140);

	{
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		if (rrf)
		{
			try
			{
				Manu.SignForm(*rrf);
				rrf->execute(Manu);
			}
			catch (std::exception const & e)
			{
				std::cout<<e.what()<<std::endl<<std::endl;
			}
			delete rrf;
		}

	}
	{
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		if (rrf)
		{
			try
			{
				Manu.SignForm(*rrf);
				rrf->execute(Manu);
			}
			catch (std::exception const & e)
			{
				std::cout<<e.what()<<std::endl<<std::endl;
			}
			delete rrf;
		}
	}
	{
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		if (rrf)
		{
			try
			{
				Manu.SignForm(*rrf);
				rrf->execute(Manu);
			}
			catch (std::exception const & e)
			{
				std::cout<<e.what()<<std::endl<<std::endl;
			}
			delete rrf;
		}
	}

	std::cout<<std::endl;
	Bureaucrat Nono("Naelle", 2);

	{
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		if (rrf)
		{
			try
			{
				Nono.SignForm(*rrf);
				rrf->execute(Nono);
			}
			catch (std::exception const & e)
			{
				std::cout<<e.what()<<std::endl<<std::endl;
			}
			delete rrf;
		}

	}
	{
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		if (rrf)
		{
			try
			{
				Nono.SignForm(*rrf);
				rrf->execute(Nono);
			}
			catch (std::exception const & e)
			{
				std::cout<<e.what()<<std::endl<<std::endl;
			}
			delete rrf;
		}
	}
	{
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		if (rrf)
		{
			try
			{
				Nono.SignForm(*rrf);
				rrf->execute(Nono);
			}
			catch (std::exception const & e)
			{
				std::cout<<e.what()<<std::endl<<std::endl;
			}
			delete rrf;
		}
	}
	return (0);
}

