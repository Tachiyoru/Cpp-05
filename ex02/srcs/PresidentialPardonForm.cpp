/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:46:55 by sleon             #+#    #+#             */
/*   Updated: 2023/05/19 13:53:17 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
	AForm("PresidentialPardonForm", 25, 5), _target("default"){
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) :
	AForm("PresidentialPardonForm", 25, 5), _target(target){
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &toCopy) :
	AForm(toCopy.getName(), 25, 5), _target(toCopy._target){
	if (this != &toCopy)
		*this = toCopy;
}

PresidentialPardonForm::~PresidentialPardonForm(){
}

PresidentialPardonForm	&PresidentialPardonForm::operator = (PresidentialPardonForm &toCopy){
	(void)toCopy;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat &executor){
	try
	{
		beSigned(executor);
	}
	catch (std::exception &e)
	{
		std::cout<<e.what()<<std::endl;
		return ;
	}
		std::cout<< _target<<" has been paerdonned by Zaphod Beeblebrox."<<std::endl<<std::endl;
}
