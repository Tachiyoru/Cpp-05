/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:04:53 by sleon             #+#    #+#             */
/*   Updated: 2023/05/19 14:12:10 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

class	Intern
{
	public:
		Intern();
		Intern(Intern &toCopy);
		~Intern();

		Intern	&operator = (Intern &toCopy);

		AForm	*newShrubbery(std::string target);
		AForm	*newPresident(std::string target);
		AForm	*newRobot(std::string target);
		AForm	*makeForm(std::string formName, std::string target);

};

#endif
