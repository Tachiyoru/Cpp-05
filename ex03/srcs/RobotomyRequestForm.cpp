/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 12:56:13 by sleon             #+#    #+#             */
/*   Updated: 2023/05/19 14:58:58 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "cstdlib"

RobotomyRequestForm::RobotomyRequestForm() :
	AForm("RobotomyRequestForm", 72, 45), _target("default"){
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) :
	AForm("RobotomyRequestForm", 72, 45), _target(target){
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &toCopy) :
	AForm(toCopy.getName(), 72, 45), _target(toCopy._target){
	if (this != &toCopy)
		*this = toCopy;
}

RobotomyRequestForm::~RobotomyRequestForm(){
}

RobotomyRequestForm	&RobotomyRequestForm::operator = (RobotomyRequestForm &toCopy){
	(void)toCopy;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat &executor){
	try
	{
		checkExec(executor);
	}
	catch (std::exception &e)
	{
		std::cout<<e.what()<<std::endl;
		return ;
	}
	std::cout<<std::endl;
	std::cout<<"brrrrrr BRRRRRRR BRRRRRRRRRRR"<<std::endl;
	srand(time(NULL));
	int	random = rand() % 2;
	if (random == 0)
		std::cout<<"brrr... "<< _target<<"'s robotomy is a success"
			<<std::endl<<_target<<" : Beep boop"<<std::endl<<std::endl;
	else
		std::cout<<"brrr... "<< _target<<"'s robotomy has failed and "
			<<_target<<" is dead"<<std::endl<<std::endl;
}
