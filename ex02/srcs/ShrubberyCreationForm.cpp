/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 11:26:29 by sleon             #+#    #+#             */
/*   Updated: 2023/05/19 13:43:05 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
	AForm("ShrubberyCreationForm", 145, 137), _target("default"){
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) :
	AForm("ShrubberyCreationForm", 145, 137), _target(target){
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &toCopy) :
	AForm(toCopy.getName(), 145, 137), _target(toCopy._target){
	if (this != &toCopy)
		*this = toCopy;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator = (ShrubberyCreationForm &toCopy){
	(void)toCopy;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat &executor){
	try
	{
		beSigned(executor);
	}
	catch (std::exception &e)
	{
		std::cout<<e.what()<<std::endl;
		return ;
	}
	std::cout<<"Creating "<<_target<<"_shrubbery ..."<<std::endl;

	std::string	outName;
	outName = _target + "_shrubbery";

	std::ofstream	outfile((char *)outName.c_str());
	if (outfile.is_open() == false)
	{
		std::cerr<<"Open/Creation outfile failed"<<std::endl;
		return ;
	}
	outfile<<"      *           *           *           *"<<std::endl;
	outfile<<"     ***         ***         ***         ***"<<std::endl;
	outfile<<"    *****       *****       *****       *****"<<std::endl;
	outfile<<"   *******     *******     *******     *******"<<std::endl;
	outfile<<"  *********   *********   *********   *********"<<std::endl;
	outfile<<" *********** *********** *********** ***********"<<std::endl;
	outfile<<"    |            |            |            |"<<std::endl;
	std::cout<<_target<<"_shrubbery is done."<<std::endl<<std::endl;

	outfile.close();
}
