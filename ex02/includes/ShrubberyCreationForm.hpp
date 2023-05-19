/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 11:14:33 by sleon             #+#    #+#             */
/*   Updated: 2023/05/19 12:39:32 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCRETIONFORM_HPP
# define SHRUBBERYCRETIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
	std::string	_target;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm &toCopy);
	~ShrubberyCreationForm();

	ShrubberyCreationForm	&operator=(ShrubberyCreationForm &toCopy);

	void	execute(Bureaucrat &executor);

};

#endif
