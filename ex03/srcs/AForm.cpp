/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:25:02 by sleon             #+#    #+#             */
/*   Updated: 2023/05/19 14:36:33 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Random form"), _signed(false), _gradeSign(50), _gradeExec (75){
	std::cout<<"Form default constructor called"<<std::endl;
}

AForm::AForm(std::string name, int toSign, int toExec) :
_name(name), _signed(false), _gradeSign(toSign), _gradeExec (toExec){
	if (this->_gradeSign < 1 || this->_gradeExec < 1)
		throw AForm::GradeTooHighException();
	else if (this->_gradeSign > 150 || this->_gradeExec > 150)
		throw AForm::GradeTooLowException();
	std::cout<<"Form constructor called"<<std::endl;
}

AForm::AForm(AForm &toCopy) : _name(toCopy._name), _signed(false), _gradeSign(toCopy._gradeSign), _gradeExec(toCopy._gradeExec) {
	std::cout<<"Copy Form consructor called"<<std::endl;
}

AForm::~AForm(){
}

AForm	&AForm::operator=(AForm &toCopy){
	(void)toCopy;
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, AForm &form)
{
	o << form.getName() << ", Form of grade " << form.getSignGrade() << " to be signed and ";
	o << form.getExecGrade() << " to be executed " << std::endl;
	if (form.getSigned())
		o<<"The form is signed"<<std::endl;
	else
		o<<"The form isn't signed"<<std::endl;
	return(o);
}

void	AForm::beSigned(Bureaucrat& crat) {
	if (this->_signed == true)
		throw AForm::AlreadySignedExecption();
	else if (crat.getGrade() > this->_gradeSign)
		throw AForm::GradeTooLowException();
	else
		this->_signed = true;
	return ;
}

void	AForm::checkExec(Bureaucrat &crat) const
{
	if (_signed == false)
		throw (AForm::NotSignedExecption());
	if (_gradeExec < crat.getGrade())
		throw (AForm::GradeTooLowException());
}

const std::string&	AForm::getName() const
{
	return(this->_name);
}

const int&	AForm::getSignGrade() const
{
	return(this->_gradeSign);
}

const int&	AForm::getExecGrade() const
{
	return(this->_gradeExec);
}

bool	AForm::getSigned() const
{
	return(this->_signed);
}
